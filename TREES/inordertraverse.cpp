#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node *buildtree(node *root)
{
    cout<<"enter the data for node:"<<endl;
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1)
    {
        return NULL;
    }


    cout<<"enter the data to insert at left of:"<<data<<endl;
    root->left= buildtree(root->left);
    cout<<"enter the data to insert at right of:"<<data<<endl;
    root->right= buildtree(root->right);
    return root;

}

//inorder to print our created binary tree we use level order traversal technique(BFS)

void levelordertraversal(node *root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        cout<<temp->data<<endl;
        // node data printed now we check if the node printed has left child or right child with it

        if(temp->left)
        {
            //left element is there for our parent node then it would be taken in our queue
            q.push(temp->left);
        }

        if(temp->right)
        {
            //right element is there for our parent node it would be taken in our queue
            q.push(temp->right);
        }
    }
}

//we would now do inorder traversal of nodes in order-LNR

void inorder(node *root)
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

void preorder(node *root)
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

//we would now do postorder traversal of nodes in order-LNR

void postorder(node *root)
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
  node *root=NULL;
  root=buildtree(root);
  
  cout<<"printing the level order traversal output:"<<endl;
  levelordertraversal(root);


  cout<<"inorder traversal is: ";
  inorder(root);

  cout<<"preorder traversal is: ";
  preorder(root);

  cout<<"postorder traversal is: ";
   postorder(root);
}