#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<long long> v;
    v.push_back(x);

    for (int i = 1; i < n; i++) {
        long long t = (a * v[i - 1] + b) % c;
        v.push_back(t);
    }

    long long sum_to_xor = 0;
    int left = 0, right = 0;

    // First window: find minimum
    long long range_minimum = v[0];
    int index = 0;
    while (right < k) {
        if (v[right] < range_minimum) {
            range_minimum = v[right];
            index = right;
        }
        right++;
    }
    sum_to_xor = range_minimum;

    // Sliding the window
    while (right < n) {
        left++;
        // If previous minimum is still within window
        if (index >= left) {
            if (v[right] < range_minimum) {
                range_minimum = v[right];
                index = right;
            }
        } else {
            // Recompute minimum in current window
            range_minimum = v[left];
            index = left;
            for (int i = left + 1; i <= right; i++) {
                if (v[i] < range_minimum) {
                    range_minimum = v[i];
                    index = i;
                }
            }
        }
        sum_to_xor ^= range_minimum;
        right++;
    }

    cout << sum_to_xor << endl;
    return 0;
}
