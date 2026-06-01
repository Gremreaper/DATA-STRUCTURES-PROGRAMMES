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

    long long range_sum = 0;
    long long sum_to_xor = 0;

    int left = 0;
    int right = 0;
    while (right < k) {
        range_sum += v[right];
        right++;
    }

    sum_to_xor = range_sum;

    while (right < n) {
        range_sum += v[right];
        range_sum -= v[left];
        left++;
        right++;
        sum_to_xor ^= range_sum;
    }

    cout << sum_to_xor << endl;
}
