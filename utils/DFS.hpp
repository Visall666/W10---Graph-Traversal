#include <iostream>
#include <vector>
#include <stack>
#include <algorithm> 

using namespace std;

void DFS(const vector<vector<int>>& adj, int start) {
    int n = adj.size();               
    vector<bool> visited(n, false);  
    stack<int> s;                    

    s.push(start);                   

    while (!s.empty()) {
        int curr = s.top();          
        s.pop();                     

        if (!visited[curr]) {        
            visited[curr] = true;    
            cout << curr << " ";    

            // Push all unvisited neighbors onto the stack in reverse order
            for (auto it = adj[curr].rbegin(); it != adj[curr].rend(); ++it) {
                if (!visited[*it]) {
                    s.push(*it);
                }
            }
        }
    }
    cout << endl;
}
