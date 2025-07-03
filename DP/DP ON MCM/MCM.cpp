#include <bits/stdc++.h>
using namespace std;

int solve(int start, int end, int dp[][100], int arr[], int n) {
    if (start >= end) {
        return 0;
    }

    if (dp[start][end] != -1) {
        return dp[start][end];
    }

    int mini_val = INT_MAX;
    for (int k = start; k <= end - 1; k++) {
        int temp = arr[start - 1] * arr[k] * arr[end] + solve(start, k, dp, arr, n) + solve(k + 1, end, dp, arr, n);
        mini_val = min(mini_val, temp);
    }

    return dp[start][end] = mini_val;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int dp[100][100];
    memset(dp, -1, sizeof(dp));  // Initialize entire dp array with -1

    int ans = solve(1, n - 1, dp, arr, n);  // Start with 1-based indexing
    cout << ans << endl;

    return 0;
}