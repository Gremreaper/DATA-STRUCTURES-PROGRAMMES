/*
class Solution {
public:
void solve(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent)
{
  queue<TreeNode*>q;
  q.push(root);
  while(!q.empty())
  {
    TreeNode *curr=q.front();
    q.pop();
    if(curr->left)
    {
      parent[curr->left]=curr;
      q.push(curr->left);
    }

    if(curr->right)
    {
      parent[curr->right]=curr;
      q.push(curr->right);
    }
  }
}

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        solve(target,parent);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int countdist=0;
        while(!q.empty())
        {
          int size=q.size();
          if(countdist++==k)
          {
            break;
          }

          for(int i=0;i<size;i++)
          {
            TreeNode *curr=q.front();
            q.pop();

            if(curr->left && !visited[curr->left])
            {
              visited[curr->left]=true;
              q.push(curr->left);
            }

            if(curr->right && !visited[curr->right])
            {
              visited[curr->right]=true;
              q.push(curr->right);
            }

            if(parent[curr] && !visited[parent[curr]])
            {
              visited[parent[curr]]=true;
              q.push(parent[curr]);
            }
          }
        }

        vector<int>ans;
        while(!q.empty())
        {
          ans.push_back(q.front()->val);
          q.pop();
        }
        return ans;
    }
};













*/