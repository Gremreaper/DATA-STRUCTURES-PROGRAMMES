#include<bits/stdc++.h>
using namespace std;
long long solve(int elem)
{
    long long start=1;
    long long end=elem;
    long ans=0;

    while(start<=end)
    {
        long long mid=(start+end)/2;
        if(mid*mid<=elem)
        {
           ans=mid;
           start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;

    cout<<solve(n)<<endl;
}