//bipartite graph --->color the graph with two colors with no adjacent color nodes
//linear graphs with no cycle are always bipartite,or any graph with even cycle length

#include<iostream>
using namespace std;

const int max_nodes=100;
int adj[max_nodes][max_nodes];
int vis[max_nodes];

bool solve(int node,int n)
{
    vis[node]=0;

    int queue[max_nodes],front=0,rear=0;
    queue[rear++]=node;

    while(front!=rear)
    {
        int node=queue[front++];
        for(int neighbour=0;neighbour<n;neighbour++)
        {
            if(adj[node][neighbour]==1)
            {
                if(vis[node]==-1)
                {
                    vis[node]=vis[neighbour] ^1;
                    queue[rear++]=neighbour;
                }else if(vis[node]==vis[neighbour])
                {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    int n,e;
    cout<<"enter the number of nodes and edges:"<<" ";
    cin>>n>>e;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            adj[i][j]=0;
        }

        vis[i]=-1;
    }

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u][v]=adj[v][u]=1;
    }

    bool biparate=true;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==-1)
        {
            if(!(solve(i,n)))
            {
              biparate=false;
              break;
            }
        }
    }

    if(biparate)
    {
        cout<<"Graph is biparate:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<"Node:"<<i<<"Color:"<<vis[i]<<endl;
        }
    }else{
        cout<<"graph is not biparate"<<endl;
    }

}

 

