#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//Time:- o(nloglogn) Space:-o(n)

void func(int n, vector<int> &v) {
    vector<int> prime(n + 1, 1);  // Initialize all numbers as prime
    prime[0] = prime[1] = 0;      // 0 and 1 are not prime

    for (int i = 2; i <= n; i++) { // Should iterate up to n
        if (prime[i]) { 
            v.push_back(i);
            for (int j = 2 * i; j <= n; j += i) { 
                prime[j] = 0;  // Mark multiples of i as non-prime
                //instead of 2*i we can also use i*i to avoid unnceseary computation
            }
        }
    }
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    func(n, v);

    cout << "Prime numbers up to " << n << " are: ";
    for (int prime : v) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
