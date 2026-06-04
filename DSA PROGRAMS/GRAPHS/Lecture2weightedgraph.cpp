#include<bits/stdc++.h>
using namespace std;
int main()
{
//for undirected weighted graph by matrix method

int n,m;
cin>>n>>m;

int adj[n+1][n+1];

for(int i=0;i<m;i++)
{
    int u,v,wt;
    cin>>u>>v>>wt;
  
    adj[u][v]=wt;

    //we will not consider the next line for directed graph

    adj[v][u]=wt;

}


//for undirected weighted graph by adjancy list making pair with weight method

int n,m;
cin>>n>>m;

vector<pair<int,int>>vec[n+1];

for(int i=0;i<m;i++)
{
    int u,v,wt;
    cin>>u>>v>>wt;

    vec[u].push_back({v,wt});

    //we will not consider the next line for directed graph
     
       vec[v].push_back({u,wt});
}
}