#include <bits/stdc++.h>
using namespace std;

// Function to find the largest rectangle area in a histogram
int solve(int arr[], int n) {
    vector<int> prev(n, -1);  // Stores indices of previous smaller elements
    vector<int> next(n, n);  // Stores indices of next smaller elements
    stack<int> s;

    // Calculate next smaller elements for each bar
    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            next[s.top()] = i; // Update the next smaller element for the top
            s.pop();
        }
        s.push(i);
    }

    // Clear the stack for reuse
    while (!s.empty()) s.pop();

    // Calculate previous smaller elements for each bar
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] >= arr[i]) {
            prev[s.top()] = i; // Update the previous smaller element for the top
            s.pop();
        }
        s.push(i);
    }

    // Find the maximum area
    int max_h = 0;
    for (int i = 0; i < n; i++) {
        int width = next[i] - prev[i] - 1; // Calculate the width
        max_h = max(max_h, arr[i] * width); // Calculate the area
    }

    return max_h;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << solve(arr, n) << endl;

    return 0;
}
