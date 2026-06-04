#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, int n) {
    int min_moves = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i-1] > arr[i]) {
            min_moves += (arr[i-1] - arr[i]);  // Calculate the difference
            arr[i] = arr[i-1];                // Make the current element equal to the previous one
        }
    }
    return min_moves;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);  // Declare a vector with size n
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // No need to push_back, just assign directly
    }

    int min_moves = solve(arr, n);
    cout << min_moves << endl;

    return 0;
}
