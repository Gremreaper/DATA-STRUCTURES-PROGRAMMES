class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
         std::vector<int> indegree(V, 0);
    std::queue<int> q;
    std::vector<int> store;

    // Step 1: Calculate indegrees
    for (int i = 0; i < V; i++) {
        for (auto it : adj[i]) {
            indegree[it]++;
        }
    }

    // Step 2: Enqueue all vertices with indegree 0
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    // Step 3: Process the graph
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        store.push_back(node);

        for (auto it : adj[node]) {
            indegree[it]--;

            if (indegree[it] == 0) {
                q.push(it);
            }
        }
    }

    // Step 4: Check if a cycle exists
    // If store size is not equal to V, then there is a cycle
    return store.size() != V; // Returns true if cycle is detected
    }
};

#include <vector>
#include <queue>            
using namespace std;        
vector<vector<int>> adj; // Adjacency list representation of the graph  
void createGraph(int V, vector<vector<int>> &edges) {
    adj.resize(V);
    for (const auto &edge : edges) {
        adj[edge[0]].push_back(edge[1]);
    }
}   
// Function to detect cycle in a directed graph using Kahn's algorithm
bool isCyclic(int V, vector<vector<int>> &edges) {
    createGraph(V, edges);
    Solution sol;
    return sol.isCyclic(V, edges);
}               