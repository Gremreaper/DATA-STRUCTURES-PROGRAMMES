#include<bits/stdc++.h>
using namespace std;
int solve(int index,int arr[],int amount,vector<vector<int>>&dp,int end)
{
    if(index==end || amount<=0)
    {
       return amount==0 ? 0:1e9;
    }

    if(dp[index][amount]!=-1)
    {
        return dp[index][amount];
    }

    int notake=solve(index+1,arr,amount,dp,end);
    int take=1e9;
    if(amount<=arr[index])
    {
        take=1+solve(index,arr,amount-arr[index],dp,end);
    }

    return dp[index][amount]=min(take,notake);
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int amount;
    cin>>amount;

    vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
    int res=solve(0,arr,amount,dp,n);
    if(res==1e9)
    {
        cout<<-1<<endl;
    }else{
        cout<<res<<endl;
    }
}