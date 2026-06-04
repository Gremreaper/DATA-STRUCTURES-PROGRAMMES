#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    //n nodes and m edges

    /*This code is for undirected graph*/
    
    int adj[n+1][n+1];
     //for 1 based indexing if it was 0 based index=then we use [n][m];
    

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;

        
    } 


    /*for directed graph we need to go from u--->v and not v---->u(vice-versa)*/


    /*
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u][v]=1;
    }
    */



}