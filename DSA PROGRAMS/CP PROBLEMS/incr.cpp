#include<bits/stdc++.h>
using namespace std;

int main() {
    size_t n;
    cin >> n;

    vector<int> arr(n);  // Use vector instead of int arr[n];

    for(size_t i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long ans = 0;
    for(size_t i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            ans += (arr[i - 1] - arr[i]);
            arr[i]=arr[i-1];
        }
    }

    cout << ans << endl;
}
