#include<iostream>
#include<vector>
using namespace std;
long long int MOD=1e9+7;
int main()
{
  int n;
  cin>>n;
  vector<int>dp(n+1,0);
  dp[0]=1;

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=6 && i-j>=0;j++)
    {
        dp[i]=(dp[i]+dp[i-j])%MOD;
    }
  }

  cout<<dp[n]<<endl;

}