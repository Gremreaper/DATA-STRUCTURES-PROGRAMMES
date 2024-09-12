/*


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //first try to find out if we found our root

        if(root==NULL)
        {
          return NULL;
        }

        if(root==p ||root==q)
        {
          return root;
        }

        TreeNode *check1=lowestCommonAncestor(root->left,p,q);
        TreeNode *check2=lowestCommonAncestor(root->right,p,q);

        if(!check1 && !check2)
        {
          return NULL;
        }

        if(check1 && !check2)
        {
          return check1;
        }

        if(!check1 && check2)
        {
          return check2;
        }

        return root;
    }
};




recursive traversal




*/