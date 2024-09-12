/*
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        
        //vertical values;
        map<int,int>mpp;
        //why not taken vector cause we would be avoiding the case of multiple at 0
        
        queue<pair<int,Node*>>q;
        
        q.push({0,root});
        while(!q.empty())
        {
            Node *r=q.front().second;
            int dist=q.front().first;
            
            q.pop();
            
            mpp[dist]=r->data;
            if(r->left)
            {
                q.push({dist-1,r->left});
            }
            
            if(r->right)
            {
                q.push({dist+1,r->right});
            }
        }
        
        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
*/