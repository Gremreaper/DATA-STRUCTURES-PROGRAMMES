///for an undirected graph
#include <iostream>
using namespace std;

const int MAX = 100; // Assuming maximum number of vertices is 100
int adj[MAX][MAX];   // Adjacency matrix for the graph
bool visited[MAX];   // Array to keep track of visited nodes
int parent[MAX];     // Array to keep track of parents of nodes

// Utility function to initialize the adjacency matrix and visited array
void initialize(int V) {
    for (int i = 0; i < V; i++) { 
        visited[i] = false;
        parent[i] = -1;
        for (int j = 0; j < V; j++) {
            adj[i][j] = 0;
        }
    }
}

// DFS function to detect and print cycle
bool dfs(int node, int V) {
    visited[node] = true;
    
    for (int neighbor = 0; neighbor < V; neighbor++) {
        if (adj[node][neighbor]) { // Check if an edge exists
            if (!visited[neighbor]) {
                parent[neighbor] = node; // Set the parent of the neighbor
                if (dfs(neighbor, V)) {
                    return true; // Cycle detected
                }
            } else if (neighbor != parent[node]) {
                // A cycle is detected
                cout << "Cycle found: ";
                
                int current = node;
                cout << neighbor << " "; // Start of cycle
                while (current != neighbor) {
                    cout << current << " ";
                    current = parent[current];
                }   
                cout << neighbor << endl; // Closing the cycle
                return true;
            }
        }
    }
    return false;
}

// Function to detect and print a cycle in an undirected graph
void detectAndPrintCycle(int V) {
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, V)) {
                return; // Exit once the first cycle is found
            }
        }
    }
    cout << "No cycle found" << endl;
}

int main() {
    int V = 5; // Number of vertices
    initialize(V);

    // Add edges to the graph
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][3] = adj[3][2] = 1;
    adj[3][4] = adj[4][3] = 1;

    detectAndPrintCycle(V);

    return 0;
}
