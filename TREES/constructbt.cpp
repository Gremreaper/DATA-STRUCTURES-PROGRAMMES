/* class Solution{
public:

node* check(node *root0,vector<int>&vec,int i)
{
    if(i>=vec.size())
    {
        return NULL;
    }
    
    if(root0==NULL)
    {
        root0=newNode(vec[i]);
    }
    
    if(2*i+1<vec.size())
    {
        root0->left=check(root0->left,vec,2*i+1);
    }
    
    if(2*i+2<vec.size())
    {
        root0->right=check(root0->right,vec,2*i+2);
    }
    
    return root0;
}

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        check(root0,vec,0);
    }

};
*/