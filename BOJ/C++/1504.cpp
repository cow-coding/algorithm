#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

const int INF = 987654321;
typedef pair<int, int> P;

int N, E;
int dist[801];
vector<P> adj[801];

vector<int> dijkstra(int start) {
    vector<int> distance(N, INF);
    
    priority_queue<P, vector<P>, greater<P>> pq;
    distance[start] = 0;
    
    pq.push(P(0, start));
    
    while (!pq.empty()) {
        int curr = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        
        if (distance[curr] < cost) continue;
        
        for (int i = 0; i < adj[curr].size(); i++) {
            int next = adj[curr][i].first;
            int d = adj[curr][i].second;
            
            if (distance[next] > distance[curr] + d) {
                distance[next] = distance[curr] + d;
                pq.push(P(distance[next], next));
            }
        }
    }
    
    return distance;
}


int main() {
    cin >> N >> E;
    
    fill(dist, dist + N, INF);
    
    for (int i = 0; i < E; i++) {
        int s, e, c;
        
        cin >> s >> e >> c;
        adj[s-1].push_back(P(e-1,c));
        adj[e-1].push_back(P(s-1,c));
    }
    
    int v1, v2;
    
    cin >> v1 >> v2;

    vector<int> start = dijkstra(0);
    vector<int> road1 = dijkstra(v1-1);
    vector<int> road2 = dijkstra(v2-1);
    
    int result = min(start[v1-1] + road1[v2-1] + road2[N-1], start[v2-1] + road2[v1-1] + road1[N-1]);
    
    if (result >= INF || result < 0) {
        cout << -1 << "\n";
        return 0;
    }
    
    cout << result << "\n";
}
