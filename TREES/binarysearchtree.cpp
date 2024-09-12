#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:

    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        //constructor making
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node *insertintobst(Node *root,int data)
{
    if(root==NULL)
    {
        //for anything is not added then new node created and returned
        root=new Node(data);
        return root;
    }

    if(data>root->data)
    {
        root->right=insertintobst(root->right,data);
    }else{
        root->left=insertintobst(root->left,data);
    }


    return root;
    //tree returned
}

void levelorder(Node *root)
{
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();

        //if level gets completed
        if(temp==NULL)
        {
            cout<<endl;

            if(!q.empty())
            {
              q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }else
          {
            q.push(temp->right);
          }
        }
    }

}

Node *minvalue(Node *root)
{
    Node *temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp;
}

Node *maxvalue(Node *root)
{
    Node *temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp;
}
void inorder(Node *root)
{
    //Base case
    if(root==NULL)
    {
        return;
    }

    //then run the nodes in LNR order

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

//we would now do preorder traversal of nodes in order-NLR

void preorder(Node *root)
{
    //Base case
    if(root==NULL)
    {
        return;
    }

    //then runs the nodes in NLR order
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void takeinput(Node *&root)
{
    int d;
    cin>>d;
    
    //for the data till the null value isnt added
    while(d!=-1)
    {
        insertintobst(root,d);
        cin>>d;
    }
}

//we would now do postorder traversal of nodes in order-LNR

void postorder(Node *root)
{
    //Base case
    if(root==NULL)
    {
        return;
    }

    //then runs the nodes in LRN order

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node *root=NULL;

    cout<<"Enter the data to create BST"<<endl;

    takeinput(root);

    cout<<"The BST representation of our input (levelorder) is:"<<endl;
    levelorder(root);

    cout<<"Inorder traversal:"<<endl;
    inorder(root);
     cout<<endl;
    cout<<"Preorder traversal:"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal:"<<endl;
    postorder(root);
}