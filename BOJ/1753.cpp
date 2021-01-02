#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <functional>
#include <queue>
using namespace std;

const int MAX_V = 20000;
const int INF = 1000000000;

typedef pair<int, int> P;

int main()
{
    int V, E, K;
    vector<P> adj[MAX_V];
    
    cin >> V >> E >> K;
    K--;
    
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        
        cin >> u >> v >> w;
        
        adj[u - 1].push_back(P(v - 1, w));
    }
    
    int dist[MAX_V];
    fill(dist, dist + MAX_V, INF);
    
    bool visitied[MAX_V] = {0};
    priority_queue<P, vector<P>, greater<P>> PQ;
    
    dist[K] = 0;
    PQ.push(P(0, K));
    
    while (!PQ.empty()) {
        int curr;
        
        do {
            curr = PQ.top().second;
            PQ.pop();
        } while (!PQ.empty() && visitied[curr]);
        
        if (visitied[curr])
            break;
        
        visitied[curr] = true;
        
        for (auto &p : adj[curr])
        {
            int next = p.first, d = p.second;
            
            if (dist[next] > dist[curr] + d) {
                dist[next] = dist[curr] + d;
                PQ.push(P(dist[next], next));
            }
        }
    }
    
    for(int i = 0; i < V; i++){
        if (dist[i] == INF)
            cout << "INF" << "\n";
        else
            cout << dist[i] << "\n";
    }
}

