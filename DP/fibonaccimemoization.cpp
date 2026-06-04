#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int>&dp)
{
    if(n<=1)
    {
        return n;
    }

    if(dp[n]!=-1)
    {
      return dp[n];
    }

    dp[n]=fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}

int store(vector<int>&tabulation,int n)
{
    tabulation[0]=0;
    tabulation[1]=1;

    for(int i=2;i<=n;i++)
    {
        tabulation[i]=tabulation[i-1]+tabulation[i-2];
    }

    return tabulation[n];

    //space optimization using variables
}
int main()
{
    int n;
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<fib(n,dp);

    vector<int>tabulation(n+1,-1);
    cout<<store(tabulation,n);
}

//tabulation

