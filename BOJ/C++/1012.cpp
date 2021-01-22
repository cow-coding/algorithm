#include <iostream>
#include <cstring>
using namespace std;

int dirx[4] = {0, -1, 1, 0};
int diry[4] = {1, 0, 0, -1};
int map[51][51];
bool visit[51][51];

int M, N, K;

void dfs(int x, int y)
{
    visit[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dirx[i];
        int ny = y + diry[i];

        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (!visit[nx][ny] && map[nx][ny])
                dfs(nx, ny);
        }
    }
}

int main()
{
    int test;

    cin >> test;

    while (test--) {
        int result{0};

        cin >> M >> N >> K;

        // 배추밭 형성
        for (int i = 0; i < K; i++) {
            int x, y;

            cin >> x >> y;

            map[y][x] = 1;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (!visit[i][j] && map[i][j] == 1) {
                    result++;

                    dfs(i, j);
                }
            }
        }

        cout << result << "\n";
        memset(map, 0, sizeof(map));
        memset(visit, 0, sizeof(visit));

    }
}
