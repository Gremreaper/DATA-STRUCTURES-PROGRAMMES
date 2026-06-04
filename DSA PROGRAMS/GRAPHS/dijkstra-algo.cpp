#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int src, vector<vector<pair<int, int>>> &adj) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(adj.size(), 1e9);

    // From source to source, it's always zero
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node]) {
            int edge = it.first;
            int edgew = it.second;

            if (distance + edgew < dist[edge]) {
                dist[edge] = distance + edgew;
                pq.push({dist[edge], edge});
            }
        }
    }

    return dist;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> li(n + 1, vector<int>(n + 1, 0));

    for (int i = 0; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        li[u][v] = w;
        li[v][u] = w;
    }

    vector<vector<pair<int, int>>> adj(n + 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (li[i][j] > 0) {
                adj[i].push_back({j, li[i][j]});
            }
        }
    }

    int src;
    cin >> src;

    vector<int> distances = dijkstra(src, adj);

    // Printing shortest distances from the source
    for (int i = 1; i <= n; i++) {
        cout << "Distance from " << src << " to " << i << " is " << distances[i] << endl;
    }

    return 0;
}
