#include <bits/stdc++.h>
using namespace std;

// Function to solve the minimum coin problem
int solve(int index, int arr[], int amount, vector<vector<int>>& dp, int end) {
    // If the amount becomes zero, we don't need any more coins
    if (amount == 0) return 0;

    // If no more coins are left or amount goes negative, return a large number
    if (index == end || amount < 0) return 1e9;

    // If result is already computed, return it
    if (dp[index][amount] != -1) return dp[index][amount];

    // Option 1: Don't take the current coin
    int notake = solve(index + 1, arr, amount, dp, end);

    // Option 2: Take the current coin, if it doesn't exceed the amount
    int take = 1e9;
    if (arr[index] <= amount) {
        take = 1 + solve(index, arr, amount - arr[index], dp, end);
    }

    // Return and store the minimum of the two options
    return dp[index][amount] = min(take, notake);
}

int main() {
    int n,amount;
    cin >> n >>amount;  // Number of coin denominations

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Coin denominations
    }

    // DP table to store results, initialized to -1
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));

    // Solve the problem starting from index 0
    int res = solve(0, arr, amount, dp, n);

    // If result is large, it means no solution is possible, so print -1
    if (res >= 1e9) {
        cout << -1 << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}
