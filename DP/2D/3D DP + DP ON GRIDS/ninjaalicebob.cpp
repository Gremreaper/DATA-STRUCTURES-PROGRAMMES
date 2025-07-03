#include <bits/stdc++.h>
using namespace std;
int maxChocolates(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, 0)));

    // Base case: last row
    for (int j1 = 0; j1 < c; ++j1) {
        for (int j2 = 0; j2 < c; ++j2) {
            if (j1 == j2)
                dp[r-1][j1][j2] = grid[r-1][j1];
            else
                dp[r-1][j1][j2] = grid[r-1][j1] + grid[r-1][j2];
        }
    }
    for (int i = r-2; i >= 0; --i) {
        for (int j1 = 0; j1 < c; ++j1) {
            for (int j2 = 0; j2 < c; ++j2) {
                int maxi = INT_MIN;

                for (int dj1 = -1; dj1 <= 1; ++dj1) {
                    for (int dj2 = -1; dj2 <= 1; ++dj2) {
                        int nj1 = j1 + dj1;
                        int nj2 = j2 + dj2;

                        if (nj1 >= 0 && nj1 < c && nj2 >= 0 && nj2 < c) {
                            int val = 0;
                            if (j1 == j2)
                                val = grid[i][j1];
                            else
                                val = grid[i][j1] + grid[i][j2];
                            val += dp[i+1][nj1][nj2];
                            maxi = max(maxi, val);
                        }
                    }
                }
                dp[i][j1][j2] = maxi;
            }
        }
    }

    return dp[0][0][c-1];
}

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> grid(r, vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> grid[i][j];
        }
    }

    cout << maxChocolates(r, c, grid) << endl;

    return 0;
}