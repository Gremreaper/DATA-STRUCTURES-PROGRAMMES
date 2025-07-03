#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,amount;
    cin>>n>>amount;

    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>dp(amount+1,1e9);
    dp[0]=0;
    for(int i=1;i<=amount;i++)
    {
        for(int coin:arr)
        {
            if(i-coin>=0)
            {
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
    }

    if(dp[amount]==1e9)
    {
        cout<<-1<<endl;
    }else{
        cout<<dp[amount]<<endl;
    }
}