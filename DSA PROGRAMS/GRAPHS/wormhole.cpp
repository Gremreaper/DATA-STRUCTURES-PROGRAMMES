#include<iostream>
using namespace std;
// x and y coordinates to end points using wormholes having x1,y1 to x2,y2 for time t
int ANS=INT_MAX,n,temp=0;
int dp[35][5];
int vis[35];

int abs(int i)
{
    return i>=0 ? i:-1*i;
}

int min(int x,int y)
{
    return (x>=y) ? y:x;
}

int absoulute(int srcx,int srcy,int destx,int desty)
{
    return abs(srcx-destx) + abs(srcy-desty);
}

void wormhole(int srcx,int srcy,int destx,int desty,int time)
{
    ANS=min(ANS,absoulute(srcx,srcy,destx,desty)+time);
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
             vis[i]=1;

            //now use lower end
            temp=absoulute(srcx,srcy,dp[i][0],dp[i][1]) + dp[i][4] +time;
            wormhole(dp[i][2],dp[i][3],destx,desty,temp);

           //upper end
           temp=absoulute(srcx,srcy,dp[i][2],dp[i][3]) + dp[i][4] + time;
           wormhole(dp[i][0],dp[i][1],destx,desty,temp);

           vis[i]=0;
        }
    }
}
int main()
{
    int t,srcx,srcy,destx,desty;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cin>>srcx>>srcy>>destx>>desty;
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
            for(int j=0;j<5;j++)
            {
                cin>>dp[i][j];
            }
        }

        wormhole(srcx,srcy,destx,desty,0);
        cout<<ANS<<endl;
    }
}