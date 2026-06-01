//bfs on DAG for u to apprear before v- kahn's algo for topo sort

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> adj[n];
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    queue<int> q;
    vector<int> indegree(n, 0);
    for (int i = 0; i < n; i++) {
        for (auto neighbour : adj[i]) {
            indegree[neighbour]++;
        }
    }

    vector<int> topo_sort;

    // Add nodes with 0 indegree to the queue
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            q.push(i);  // Corrected here
        }
    }

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo_sort.push_back(node);

        for (auto neighbour : adj[node]) {
            indegree[neighbour]--;

            if (indegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    for (auto it : topo_sort) {
        cout << it << " ";
    }

    return 0;
}
