#include <iostream>
#include <functional>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>
using namespace std;

const int INF = 1000000000;
typedef pair<int, int> P;

int main()
{
    vector<P> adj[1001];
    int city, bus;
    int start, end;
    int dist[1001];
    bool visit[1001];
    priority_queue<P, vector<P>, greater<P>> pq;
    
    fill(dist, dist + 1001, INF);
    
    cin >> city >> bus;
    
    for (int i = 0; i < bus; i++)
    {
        int c1, c2, cost;
        
        cin >> c1 >> c2 >> cost;
        
        adj[c1 - 1].push_back(P(c2 - 1, cost));
    }
    
    cin >> start >> end;
    
    
    dist[start - 1] = 0;
    pq.push(P(0, start - 1));
    
    while (!pq.empty()) {
        int curr;
        
        do {
            curr = pq.top().second;
            pq.pop();
        } while (!pq.empty() && visit[curr]);
        
        if (visit[curr]) break;
        
        visit[curr] = true;
        
        for (auto& p : adj[curr]) {
            int next = p.first, d = p.second;
            
            if (dist[next] > dist[curr] + d) {
                dist[next] = dist[curr] + d;
                pq.push(P(dist[next], next));
            }
        }
    }
    
    cout << dist[end - 1] << "\n";
    
}
