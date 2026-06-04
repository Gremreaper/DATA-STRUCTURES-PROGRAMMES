#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>>dp(n+1,vector<int>(3,0));
        dp[0][0] = arr[0][0];
        dp[0][1] = arr[0][1];
        dp[0][2] = arr[0][2];
        
        for(int i=1;i<n;i++){
            dp[i][0] = arr[i][0] + max(dp[i-1][1],dp[i-1][2]);
            dp[i][1] = arr[i][1] + max(dp[i-1][0],dp[i-1][2]);
            dp[i][2] = arr[i][2] + max(dp[i-1][1],dp[i-1][0]);
        }
        
        return max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    }
};
int main() {
    Solution sol;
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result = sol.maximumPoints(arr);
    cout << "Maximum points that can be collected: " << result << endl; // Output: 21
    return 0;
}