#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Use vector for dynamic sizing
    vector<int> arr(n-1);
    
    // Input the elements of the array
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    // Use long long to handle large numbers and avoid overflow
    long long sum = 1LL * n * (n + 1) / 2;
    
    // Subtract each element in the array from the sum
    for (auto it : arr) {
        sum -= it;
    }

    // Output the missing number
    cout << sum << endl;

    return 0;
}
