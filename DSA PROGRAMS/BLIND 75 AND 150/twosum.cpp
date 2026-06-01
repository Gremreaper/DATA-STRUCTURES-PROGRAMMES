#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& ans, vector<int>& input, int n, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        if (mpp.find(target - input[i]) != mpp.end()) {
            ans.push_back(i);
            ans.push_back(mpp[target - input[i]]);
            return; // Stop after finding the pair
        }
        mpp[input[i]] = i;
    }
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> input(n); // Initialize with size n
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    vector<int> ans;
    solve(ans, input, n, target);
    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
