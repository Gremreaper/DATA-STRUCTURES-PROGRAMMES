#include <bits/stdc++.h>
using namespace std;

// DFS to perform topological sort and cycle detection
bool dfs(int node, vector<int> &vis, vector<int> &pathVis, vector<vector<int>> &adj) {
    vis[node] = 1;
    pathVis[node] = 1; // marks the current path

    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (!dfs(it, vis, pathVis, adj))
                return false;
        } else if (pathVis[it]) {
            // A back edge found -> cycle exists
            return false;
        }
    }

    pathVis[node] = 0; // backtrack
    return true;
}

int main() {
    int numCourses, numPrerequisites;
    cin >> numCourses >> numPrerequisites;

    vector<pair<int, int>> prerequisites;
    for (int i = 0; i < numPrerequisites; i++) {
        int u, v;
        cin >> u >> v;
        prerequisites.push_back({u, v});
    }

    vector<vector<int>> adj(numCourses);
    for (auto it : prerequisites) {
        // Edge from prerequisite to course: v -> u
        adj[it.second].push_back(it.first);
    }

    vector<int> vis(numCourses, 0), pathVis(numCourses, 0);

    // Check for cycle in the graph
    for (int i = 0; i < numCourses; i++) {
        if (!vis[i]) {
            if (!dfs(i, vis, pathVis, adj)) {
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
    return 0;
}
