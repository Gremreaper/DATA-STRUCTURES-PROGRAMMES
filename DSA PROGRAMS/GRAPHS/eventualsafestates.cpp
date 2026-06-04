#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        //reversal of the edges of the graph
        int n = graph.size();
        vector<int>indegree(n,0);
        vector<int>adj[n];

        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                adj[it].push_back(i);
                indegree[i]++;
            }
        }

        queue<int>q;
        for(int i=0;i<indegree.size();i++){
             if(!indegree[i]) q.push(i);
        }

        vector<int>ans;
        while(!q.empty()){
             int node = q.front();
             q.pop();
             ans.push_back(node);

             for(auto it:adj[node]){
                  indegree[it]--;
                  if(!indegree[it]) q.push(it);
             }
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> graph = {{1,2},{2,3},{5},{0},{5},{}};
    vector<int> safeNodes = sol.eventualSafeNodes(graph);
    
    cout << "Safe nodes: ";
    for (int node : safeNodes) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

