#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void BFS(const vector<vector<int>>& adj, int start) {
    int n = adj.size();
    vector<bool> visited(n, false);  
    queue<int> q;                    

    visited[start] = true;           
    q.push(start);                   

    while (!q.empty()) {
        int curr = q.front();        
        q.pop();                     

        cout << curr << " ";   

        // Explore all neighbors
        for (int neighbor : adj[curr]) { 
            if (!visited[neighbor]) {    
                visited[neighbor] = true; 
                q.push(neighbor);         
            }
        }
    }
    cout << endl; 
}
