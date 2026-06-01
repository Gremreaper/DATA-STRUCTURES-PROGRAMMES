class Solution{
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string>ans;
        vector<vector<int>>store(n,vector<int>(n,0));
        if(m[0][0]==1)
        {
            solve(0,0,m,n,"",store,ans);
        }
        
        return ans;
    }
    
    void solve(int row,int col,vector<vector<int>>m,int n,string move,vector<vector<int>>store,vector<string>&ans)
    {
        if(row==n-1 && col==n-1)
        {
            ans.push_back(move);
        }
        
        store[row][col]=1;
        
        if(col+1<n && m[row][col+1]==1 && store[row][col+1]==0)
        {
            solve(row,col+1,m,n,move+'R',store,ans);
        }
        
        if(col-1>=0 && m[row][col-1]==1 && store[row][col-1]==0)
        {
            solve(row,col-1,m,n,move+'L',store,ans);
        }
        
        if(row-1>=0 && m[row-1][col]==1 && store[row-1][col]==0)
        {
            solve(row-1,col,m,n,move+'U',store,ans);
        }
        
        if(row+1<n && m[row+1][col]==1 && store[row+1][col]==0)
        {
            solve(row+1,col,m,n,move+'D',store,ans);
        }
        
        store[row][col]=0;
        return ;
        //backtrack
        

    }
};

    