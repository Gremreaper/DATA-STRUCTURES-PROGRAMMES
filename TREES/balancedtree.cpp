/*

class Solution {
public:

int height(TreeNode *root)
{
  if(root==NULL)
  {
    return 0;
  }


  return 1+max(height(root->left),height(root->right));
}
    bool isBalanced(TreeNode* root) {
        //Base case
        if(root==NULL)
        {
          return true;
        }


        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);

        bool diffrence=abs(height(root->left)-height(root->right))<=1;

        if(left && right && diffrence)
        {
          return true;
        }else{
          return false;
        }
    }
};



Every subtree must be balanced to make the whole tree Balanced



*/