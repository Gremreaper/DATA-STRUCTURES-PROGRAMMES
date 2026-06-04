class Solution {
public:

bool safe(int row,int col,vector<string>store,int n)
{
  //left top
  int dr=row;
  int dc=col;

  while(row>=0 && col>=0)
  {
    if(store[row][col]=='Q')
    {
      return false;
    }

    row--;
    col--;
  }

  //left
  col=dc;
  row=dr;

  while(col>=0)
  {
    if(store[row][col]=='Q')
    {
      return false;
    }

    col--;
  }

  col=dc;
  row=dr;

  while(row<n && col>=0)
  {
    if(store[row][col]=='Q')
    {
      return false;
    }

    row++;
    col--;
  }

  return true;
}
void solve(int col,vector<vector<string>>&ans,vector<string>&store,int n)
{
  if(col==n)
  {
    ans.push_back(store);
    return ;
  }

  for(int row=0;row<n;row++)
  {
    if(safe(row,col,store,n))
    {
      store[row][col]='Q';
      solve(col+1,ans,store,n);
      //backtrack
      store[row][col]='.';
    }
  }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>store(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
          store[i]=s;
        }

        solve(0,ans,store,n);

        return ans;
    }
};