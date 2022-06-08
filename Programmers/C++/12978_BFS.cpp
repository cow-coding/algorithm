#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

typedef pair<int, int> P;

int solution(int N, vector<vector<int>> road, int K) {
    int answer = 0;
    vector<vector<P>> map(N+1);
    
    for (int i = 0; i < road.size(); i++) {
        int s = road[i][0]-1;
        int e = road[i][1]-1;
        int c = road[i][2];
        
        map[s].push_back(P(e, c));
        map[e].push_back(P(s, c));
    }
    
    queue<P> q;
    bool visit[51] = {false, };
    vector<int> cum(N+1, 987654321);
    cum[0] = 0;
    
    q.push(P(0, 0));
    visit[0] = true;
    
    while(!q.empty()) {
        int curr = q.front().first;
        int cost = q.front().second;
        
        q.pop();
        
        for (auto next : map[curr]) {
            int ncost = next.second;
            int nt = next.first;
            
            if (cum[curr] + ncost <= K && cum[nt] >= cum[curr] + ncost) {
                visit[nt] = true;
                cum[nt] = cum[curr] + ncost;
                q.push(P(nt, ncost));
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        if (visit[i]) answer++;
    }
    
    return answer;
}