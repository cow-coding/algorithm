#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

const int INF = 100000000;
int map[101][101];
int dist[101][101];

int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

int N, M;
int ans{0};

struct Node {
    int x, y, distance;

    Node(int tx, int ty, int dist) : x(tx), y(ty), distance(dist) { }

    bool operator > (const Node& n) const {
        return distance > n.distance;
    }
};

int main()
{
    scanf("%d %d", &M, &N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            scanf("%1d", &map[i][j]);
            dist[i][j] = INF;
        }

    // 다익스트라 시작
    priority_queue<Node, vector<Node>, greater<Node>> PQ;
    PQ.push(Node(0, 0, 0)); // pq시작 위치는 (0, 0)
    dist[0][0] = 0;         // 시작점은 0으로 만든다.

    while (!PQ.empty()) {
        int x = PQ.top().x;
        int y = PQ.top().y;
        int d = PQ.top().distance;
        PQ.pop();

        if (x == N - 1 && y == M - 1) break;

        if (d > dist[x][y]) continue; // 만약 현재의 거리가 해당 거리보다 크면 넘어간다.

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (dist[nx][ny] > dist[x][y] + map[nx][ny]) {
                    dist[nx][ny] = dist[x][y] + map[nx][ny];
                    PQ.push(Node(nx, ny, dist[nx][ny]));
                }
            }
        }
    }

    printf("%d\n", dist[N - 1][M - 1]);

}
