#include "utils/BFS.hpp"
#include "utils/DFS.hpp"
#include <iostream>
#include <vector>

using namespace std;

// Function to add an edge to the adjacency list
void addEdge(vector<vector<int>> &adj, int s, int t) {
    adj[s].push_back(t);
    adj[t].push_back(s); 
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    vector<vector<int>> edges = {
        {0, 1}, {0, 4}, {1, 2}, {1, 3}, {3, 4}
    };
    for (auto &e : edges) {
        addEdge(adj, e[0], e[1]);
    }

    int startNode = 0;
    // Perform DFS
    cout << "DFS(0): ";
    DFS(adj, startNode);
    cout << endl;

    // Perform BFS
    cout << "BFS(0): ";
    BFS(adj, startNode);
    cout << endl;

    return 0;
}
