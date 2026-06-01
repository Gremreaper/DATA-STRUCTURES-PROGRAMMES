/*class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>store;
        int i=0;
        int n=s.length();
        func(0,n,ans,store,s);

        return ans;
    }

    bool checkpalin(string r)
    {
      int start=0;
      int end=r.size()-1;

      if(r.size()==1)
      {
        return true;
      }

      while(start<=end)
      {
         if(r[start]!=r[end])
         {
          return false;
         }

         start++;
         end--;
      }

      return true;
    }
  
  void func(int index,int size,vector<vector<string>>&ans,vector<string>&store,string s)
  {
    if(index==size)
    {
      ans.push_back(store);
      return ;
    }
    else{
      for(int j=index;j<size;j++)
      {
        string r=s.substr(index,j-index+1);
        if(checkpalin(r))
        {
          store.push_back(r);
          func(j+1,size,ans,store,s);
          store.pop_back();
          //backtrack

        }
      }
    }
  }

};
*/

//leetcode question by recursion
