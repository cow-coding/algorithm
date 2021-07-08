#include <iostream>
#include <utility>
#include <queue>
using namespace std;

typedef pair<int, int> P;

const int MAX = 1010;
const int INF = 1000000000;

int main() {
    int n, m;
    vector<P> adj[MAX];
    priority_queue<P, vector<P>, greater<P>> pq;
    int dist[MAX];
    int city[MAX] = {0,};
    bool visited[MAX] = {0,};
    
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int s, e, c;
        
        cin >> s >> e >> c;
        
        adj[s].push_back(P(e, c));
    }
    
    int s, e;
    cin >> s >> e;
    fill(dist, dist + MAX, INF);
    dist[s] = 0;
    pq.push(P(0, s));
    
    while (!pq.empty()) {
        int curr;
        
        do {
            curr = pq.top().second;
            pq.pop();
        } while (!pq.empty() && visited[curr]);
        
        if (visited[curr]) break;
        
        visited[curr] = true;
        
        for (auto &p : adj[curr]) {
            int next = p.first, d = p.second;
            
            if (dist[next] > dist[curr] + d) {
                dist[next] = dist[curr] + d;
                city[next] = curr;
                pq.push(P(dist[next], next));
            }
        }
    }
    
    vector<int> answer;
    int node = e;
    
    while (node) {
        answer.push_back(node);
        node = city[node];
    }
    
    cout << dist[e] << "\n";
    cout << answer.size() << "\n";
    for (int i = answer.size() - 1; i > -1; i--) {
        cout << answer[i] << " ";
    }
    
    cout << "\n";
}
