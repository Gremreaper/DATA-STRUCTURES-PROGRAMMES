class Solution {
public:
    int frogJump(vector<int>& heights) {
        int n = heights.size();
         vector<int>dp(n,0);
         dp[0] = heights[0];
         if(n>=2){
            dp[1] = abs(heights[1] - heights[0]);
         }

         for(int i=2;i<n;i++){
            dp[i] = min(dp[i-1] + abs(heights[i]-heights[i-1]),dp[i-2] + abs(heights[i] - heights[i-2]));
         }
         return dp[n-1];
    }
};

int main() {
    Solution sol;
    vector<int> heights = {10, 30, 20, 40};
    int result = sol.frogJump(heights);
    cout << "Minimum energy required: " << result << endl; // Output: 20
    return 0;
}