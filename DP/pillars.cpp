#include<iostream>
using namespace std;
void solve(int arr[],int vis[],int p1,int p2,int n,int &ans)
{
    if(p1==p2)
    {
        if(p1>ans)
        {
            ans=p1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            solve(arr,vis,p1+arr[i],p2,n,ans);
            solve(arr,vis,p1,p2+arr[i],n,ans);
            vis[i]=0;
        }
    }
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

    int vis[n]={0};
    int ans=-1;
    solve(arr,vis,0,0,n,ans);
    cout<<ans;
}
