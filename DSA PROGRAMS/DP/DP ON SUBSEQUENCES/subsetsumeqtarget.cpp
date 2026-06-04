#include <vector>
#include <numeric>  
using namespace std;
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        if (abs(target) > total) return 0;

        int n = nums.size();
        int offset = total;
        vector<vector<int>> dp(n + 1, vector<int>(2 * total + 1, 0));
        dp[0][offset] = 1; 

        for (int i = 0; i < n; ++i) {
            for (int sum = -total; sum <= total; ++sum) {
                if (dp[i][sum + offset] > 0) {
                    dp[i + 1][sum + nums[i] + offset] += dp[i][sum + offset];
                    dp[i + 1][sum - nums[i] + offset] += dp[i][sum + offset];
                }
            }
        }

        return dp[n][target + offset];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;
    int result = sol.findTargetSumWays(nums, target);
    cout << "Number of ways to achieve target sum: " << result << endl;
    
    return 0;
}


