/*
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;

        if(root==NULL)
        {
          return ans;
        }
        q.push(root);
        while(!q.empty())
        {
          int size=q.size();
          int data;
          for(int i=0;i<size;i++)
          {
            TreeNode *r=q.front();
            q.pop();
            data=r->val;
            if(r->left)
            {
              q.push(r->left);
            }

            if(r->right)
            {
              q.push(r->right);
            }
          }

          ans.push_back(data);
        }
        return ans;
    }
};
*/