#include<iostream>
using namespace std;
int factorial(int x)
{

    if(x==0)
    {
        return 1;
    }
    int smaller=factorial(x-1);
    int bigger=x*smaller;

    return bigger;
}

int main()
{
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;
}