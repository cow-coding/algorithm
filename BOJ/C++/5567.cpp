#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

const int INF = 1000000000;
typedef pair<int, int> P;

int main()
{
    vector<P> adj[501];
    
    int dongki;
    int length;
    
    
    cin >> dongki >> length;
    
    // 무방향 그래프 형성
    for (int i = 0; i < length; i++) {
        int p1, p2;
        
        cin >> p1 >> p2;
        adj[p1 - 1].push_back(P(p2 - 1, 1));
        adj[p2 - 1].push_back(P(p1 - 1, 1));
    }
    
    int dist[501];
    bool visit[501] = {false, };
    priority_queue<P, vector<P>, greater<P>> pq;
    fill(dist, dist + dongki, INF);
    
    // 다익스트라
    dist[0] = 0;
    pq.push(P(0, 0));
    while (!pq.empty()) {
        int curr;
        
        do {
            curr = pq.top().second;
            pq.pop();
        } while (!pq.empty() && visit[curr]);
        
        if (visit[curr]) break;
        
        visit[curr] = true;
        
        for (auto &p : adj[curr]) {
            int next = p.first, d = p.second;
            
            if (dist[next] > dist[curr] + d) {
                dist[next] = dist[curr] + d;
                pq.push(P(dist[next], next));
            }
        }
    }
    
    int ans{0};
    
    for (int i = 0; i < dongki; i++) {
        if (dist[i] >= 1 && dist[i] <= 2)
            ans++;
    }
    
    cout << ans << "\n";
}
