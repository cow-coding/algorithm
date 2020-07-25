#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1001;
const int INF = 100000000;

int main()
{
    int N, M, X;
    int dist[MAX][MAX];

    cin >> N >> M >> X;


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            dist[i][j] = i == j ? 0 : INF;

    // 방향그래프 형성
    for (int i = 0; i < M; i++) {
        int v1, v2, cost;

        cin >> v1 >> v2 >> cost;
        dist[v1 - 1][v2 - 1] = min(dist[v1 - 1][v2 - 1], cost);
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (dist[i][k] == INF || dist[k][j] == INF) continue;

                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }


    int result{0};
    int tmp;

    for (int i = 0; i < N; i++) {
        if (dist[X - 1][i] + dist[i][X - 1] > result) {
            result = dist[X - 1][i] + dist[i][X - 1];
        }
    }

    cout << result << "\n";
}
