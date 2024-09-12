#include<iostream>
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


    cout<<"enter the data to insert at left:"<<endl;
    root->left= buildtree(root->left);
    cout<<"enter the data to insert at right:"<<endl;
    root->right= buildtree(root->right);
    return root;

}

void func(node *root,vector<int>preorder,vector<int>inorder,vector<int>postorder)
{
    
}

int main()
{
  node *root=NULL;

  root=buildtree(root);
  root=preorder(root);


}