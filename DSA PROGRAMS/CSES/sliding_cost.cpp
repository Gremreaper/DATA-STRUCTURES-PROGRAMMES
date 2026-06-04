#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<long long> ans;

    // Initialize first window
    vector<long long> window(v.begin(), v.begin() + k);
    sort(window.begin(), window.end());

    // Function to compute cost using prefix sums
    auto getCost = [&](vector<long long>& w) -> long long {
        long long mid = k / 2;
        long long median = w[mid];

        // Compute prefix sums
        vector<long long> prefix(k, 0);
        prefix[0] = w[0];
        for (int i = 1; i < k; i++) prefix[i] = prefix[i-1] + w[i];

        long long cost_left = mid > 0 ? median * mid - prefix[mid - 1] : 0;
        long long cost_right = prefix[k - 1] - prefix[mid] - median * (k - mid - 1);

        return cost_left + cost_right;
    };

    ans.push_back(getCost(window));

    // Slide the window
    for (int i = k; i < n; i++) {
        // Remove v[i-k], insert v[i] into sorted window
        auto it = lower_bound(window.begin(), window.end(), v[i - k]);
        window.erase(it);
        it = lower_bound(window.begin(), window.end(), v[i]);
        window.insert(it, v[i]);

        ans.push_back(getCost(window));
    }

    for (auto x : ans) cout << x << " ";
    cout << "\n";
}
