class Solution {
public:
    int solve(vector<vector<int>>& matrix, vector<vector<int>>& dp, int row, int col) {
        int n = matrix.size();
        if (col < 0 || col >= n) return INT_MAX;
        if (row == n - 1) return matrix[row][col];
        if (dp[row][col] != -1) return dp[row][col];

        int downLeft = solve(matrix, dp, row + 1, col - 1);
        int down = solve(matrix, dp, row + 1, col);
        int downRight = solve(matrix, dp, row + 1, col + 1);

        return dp[row][col] = matrix[row][col] + min({downLeft, down, downRight});
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int min_result = INT_MAX;

        for (int col = 0; col < n; col++) {
            min_result = min(min_result, solve(matrix, dp, 0, col));
        }

        return min_result;
    }
};
#include <iostream>
#include <vector>   
using namespace std;
int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {2, 1, 3},
        {6, 5, 4},
        {7, 8, 9}
    };
    cout << "Minimum Falling Path Sum: " << sol.minFallingPathSum(matrix) << endl; // Output: 12
    return 0;
}