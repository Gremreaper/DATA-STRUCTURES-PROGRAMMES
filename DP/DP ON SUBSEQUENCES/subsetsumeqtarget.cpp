#include<bits/stdc++.h>
using namespace std;
int subsetSum(int n, int target, vector<int> &arr) {
    vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
    
    // Base case: sum of 0 can always be achieved with an empty subset
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }
    
    // Fill the dp table
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= target; ++j) {
            if (arr[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    
    return dp[n][target];
}