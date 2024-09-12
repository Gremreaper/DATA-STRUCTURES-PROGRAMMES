/*
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {


      if(root==NULL)
      {
        return {};
      }
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
          int size=q.size();
          vector<int>store;
          for(int i=0;i<size;i++)
          {
            TreeNode *curr=q.front();
            q.pop();

            store.push_back(curr->val);

            if(curr->left)
            {
              q.push(curr->left);
            }

            if(curr->right)
            {
              q.push(curr->right);
            }
          }

          ans.push_back(store);
        }
     return ans;
    }
};
*/