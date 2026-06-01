#include <vector>  
#include <stack>
#include <iostream>
using namespace std;      
class Solution { 
public:
    bool dfs(int node, vector<vector<int>>& adj, stack<int>& st, vector<int>& vis, vector<int>& pathVis) {
        vis[node] = 1;
        pathVis[node] = 1;

        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (!dfs(it, adj, st, vis, pathVis))
                    return false;
            } else if (pathVis[it]) {
                // A back edge found — cycle detected
                return false;
            }
        }

        pathVis[node] = 0;   // Backtrack
        st.push(node);       // Topological sort
        return true;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for (auto& it : prerequisites) {
            adj[it[1]].push_back(it[0]); // prereq -> course
        }

        vector<int> vis(numCourses, 0), pathVis(numCourses, 0), answers;
        stack<int> st;

        for (int i = 0; i < numCourses; ++i) {
            if (!vis[i]) {
                if (!dfs(i, adj, st, vis, pathVis)) {
                    return {}; // cycle detected — no valid ordering
                }
            }
        }

        while (!st.empty()) {
            answers.push_back(st.top());
            st.pop();
        }

        return answers;
    }
};
int main() {
    Solution sol;
    int numCourses = 4;
    vector<vector<int>> prerequisites = {{1, 0}, {2, 1}, {3, 2}};
    
    vector<int> order = sol.findOrder(numCourses, prerequisites);
    
    if (order.empty()) {
        cout << "No valid ordering exists due to a cycle." << endl;
    } else {
        cout << "Valid course order: ";
        for (int course : order) {
            cout << course << " ";
        }
        cout << endl;
    }
    
    return 0;
}