#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }


    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int ans=fib(n);

    cout<<ans<<endl;
}


/*

using for loop

int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }

*/