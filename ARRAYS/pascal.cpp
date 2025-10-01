#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int rows = numRows;
        vector<vector<int>>dp(rows,vector<int>(rows,0));
        dp[0][0] = 1;
        for(int row =1;row <rows; row++){
             for(int st=0;st<=row;st++){
                 if(st ==0 || st == row) dp[row][st] = 1;
                 else{
                     dp[row][st] = dp[row-1][st-1] + dp[row-1][st];
                 }
             }
        }

        vector<vector<int>>ans;
        for(int i=0;i<rows;i++){
            vector<int>st; 
            for(int j=0;j<i+1;j++){
                st.push_back(dp[i][j]);
            }
            ans.push_back(st);
        }

        return ans;
    }
};                
int main(){
    int n;
    cin>>n;
    Solution obj;
    vector<vector<int>>ans = obj.generate(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}