#include <iostream>
#include <algorithm>
using namespace std;

#define INF 1000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int dist[101][101];
    int nodenum, bus;
    
    cin >> nodenum >> bus;

    for (int i = 1; i <= nodenum; i++)
    {
        for (int j = 1; j <= nodenum; j++)
            dist[i][j] = i == j ? 0 : INF;
    }
    
    for (int i = 0; i < bus; i++)
    {
        int start, end, cost;
        
        cin >> start >> end >> cost;
        
        dist[start][end] = min(dist[start][end], cost);
    }
    
    for (int k = 1; k <= nodenum; k++)
    {
        for (int i = 1; i <= nodenum; i++)
        {
            for (int j = 1; j <= nodenum; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
    }
    
    // 최종 출력
    for (int i = 1; i <= nodenum; i++)
    {
        for (int j = 1; j <= nodenum; j++)
        {
            if (dist[i][j] == INF)
                cout << 0 << " ";
            else
                cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
}
