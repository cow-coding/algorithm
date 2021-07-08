#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define INF 1000000000
typedef pair<int, int> P;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<P> adj[110]; // (이어진 정점 번호, 거리)
    int V, M;
    
    cin >> V >> M;
    
    for (int i = 0; i < M; i++) // 간선 정보 입력
    {
        int a, b, c;
        
        cin >> a >> b >> c;
        adj[a].push_back(P(b, c));
        adj[b].push_back(P(a, c));
    }
    
    int jihun, sungha;
    
    cin >> jihun >> sungha;
    
    int distj[110]; // 지헌으로부터 거리 저장
    int dists[110]; // 성화로부터 거리 저장
    int sum[110]; // 성화와 지헌으로부터 거리 각각을 합한 값 저장
    
    fill(distj, distj + 110, INF);
    fill(dists, dists + 110, INF);
    fill(sum, sum + 110, INF);
    
    bool visiteds[110] = {0,};
    bool visitedj[110] = {0,};
    priority_queue<P, vector<P>, greater<P>> JPQ;
    priority_queue<P, vector<P>, greater<P>> SPQ;
    
    // 지헌 기준 다익스트라
    distj[jihun] = 0;
    JPQ.push(P(0, jihun));
    while (!JPQ.empty())
    {
        int curr;
        
        do {
            curr = JPQ.top().second;
            JPQ.pop();
        } while (!JPQ.empty() && visitedj[curr]);
        
        if (visitedj[curr]) break;
        
        visitedj[curr] = true;
        
        for (auto &p : adj[curr])
        {
            int next = p.first, d = p.second;
            
            if (distj[next] > distj[curr] + d)
            {
                distj[next] = distj[curr] + d;
                JPQ.push(P(distj[next], next));
            }
        }
    }
    
    // 성하 기준 다익스트라
    dists[sungha] = 0;
    SPQ.push(P(0, sungha));
    while (!SPQ.empty())
    {
        int curr;
        
        do {
            curr = SPQ.top().second;
            SPQ.pop();
        } while (!SPQ.empty() && visiteds[curr]);
        
        if (visiteds[curr]) break;
        
        visiteds[curr] = true;
        
        for (auto &p : adj[curr])
        {
            int next = p.first, d = p.second;
            
            if (dists[next] > dists[curr] + d)
            {
                dists[next] = dists[curr] + d;
                SPQ.push(P(dists[next], next));
            }
        }
    }
    
    int tmp = 1100000000;
    vector<P> save;
    
    
    // 각 노드의 총 걸리는 시간 계산 알고리즘
    
    for (int i = 1; i <= V; i++)
    {
        if (dists[i] == 0)
            dists[i] = INF;
        
        if (distj[i] == 0)
            distj[i] = INF;

        sum[i] = dists[i] + distj[i];
        
        if (sum[i] < tmp)
        {
            save.clear();
            save.push_back(P(sum[i], i));
            tmp = sum[i];
        } else if (sum[i] == tmp)
        {
            save.push_back(P(sum[i], i));
        }
    }
    
    int ans = 200; // 출력 답을 저장 변수
    int tmpdist = 200000;
    

    for (int i = 0; i < save.size(); i++)
    {
        if (distj[save[i].second] <= dists[save[i].second]) // 지헌이가 덜 걸리는 경우
        {
            if (save[i].second != jihun && save[i].second != sungha)
            {
                if (tmpdist > distj[save[i].second]) // 최소 걸리는 시간을 갱신하고 해당 노드 저장
                {
                    tmpdist = distj[save[i].second];
                    ans = save[i].second;
                } else if (tmpdist == distj[save[i].second])
                {
                    if (ans > save[i].second)
                    {
                        ans = save[i].second;
                    }
                }
            }
        }
    }
    
    
    
    if (ans >= 200)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
    
}
