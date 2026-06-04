#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<vector<int>>dp(n,vector<int>(3,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            int elem;
            cin>>elem;

            dp[i][j]=elem;
        }
    }

    int counter=0;

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=dp[i][j];
        }

        counter+=(sum>=2 ? 1:0) ;
    }

    cout<<counter<<endl;
}