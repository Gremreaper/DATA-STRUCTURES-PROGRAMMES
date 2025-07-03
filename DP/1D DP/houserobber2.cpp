#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int>& nums, int start, int end) {
        int len = end - start + 1;
        if (len == 1) return nums[start];
        vector<int> dp(len, 0);
        dp[0] = nums[start];
        dp[1] = max(nums[start], nums[start + 1]);

        for (int i = 2; i < len; i++) {
            dp[i] = max(dp[i - 1], nums[start + i] + dp[i - 2]);
        }
        return dp[len - 1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        return max(solve(nums, 0, n - 2), solve(nums, 1, n - 1));
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2, 3, 2};
    int result = sol.rob(nums);
    cout << "Maximum amount of money that can be robbed: " << result << endl; // Output: 3
    return 0;
}
