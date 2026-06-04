#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
   
   //adjancy list of having n+1 lists  (for undirected graph)

    vector<int>adj[n+1];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    //for directed graph we need to take from u--->v and not v-->u(vice versa)

    /*
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
    }
    
    */

}