#include <cstdio>
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

typedef pair<int, int> P; //  x축, y축을 결정함
int N, M;
char map[101][101]; // i행, j열 -> x축, y축 좌표
bool visit[101][101]; // i행, j열 -> x축, y축 좌표
int depth[101][101]; // i행, j열 칸까지 오는 데 최소 칸 수
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int ans{0};
int result;
queue<P> Q;

void BFS(int x, int y) { // 시작하는 칸의 좌표
    // 좌표값으로 주는 문제
    // 1. 그래프상 연결관계 -> 다음칸으로 이동할 수 있는지?
    // 2. 다음칸이 이미 탐색을 마친 곳인지? -> 지나온 곳인지?
    // 3. 0행 or 0열보다 작은 값으로 이동하지 않는지, N, M보다 넘어가지 않는지를 확인해야 함
    
    if (x < 0 && y < 0 ) return;
    
    visit[x][y] = true; // x는 행, y는 열을 결정할 것
    Q.push(P(x, y)); // make_pair(x,y) -> P(x,y)
    
    while (!Q.empty()) {
        // 현재 탐색지점 값을 가져옴
        int cx = Q.front().first; // Pair(x, y) -> x:first, y:second
        int cy = Q.front().second;
        Q.pop();
        
        for (int i = 0; i < 4; i++) {
            // 다음 탐색 지점을 가져옴 -> 탐색 지점 아닐 수도 있음 : 범위를 벗어날 수도 있음(3을 위배할 수 있음)
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            // 조건 범위 : 3 > 1, 2
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                // (3)번 조건 확인
                if(map[nx][ny] == '1' && !visit[nx][ny]) {
                    // (1), (2)조건을 확인을 했어요.
                    visit[nx][ny] = true;
                    Q.push(P(nx, ny));
                    depth[nx][ny] = depth[cx][cy] + 1;
                }
            }
            
            
        }
    }
}

/*
void BFS(int x, int y)
{
    if (x < 0 && y < 0) return;
    
    visit[x][y] = true;
    Q.push(P(x, y));
    
    int tx, ty;
    
    while (!Q.empty()) {
        tx = Q.front().first;
        ty = Q.front().second;
        
        Q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = tx + dx[i];
            int ny = ty + dy[i];
            
            if (map[nx][ny] == '1' && nx < N && ny < M && !visit[nx][ny]) {
                visit[nx][ny] = true;
                Q.push(P(nx, ny));
                depth[nx][ny] = depth[tx][ty] + 1;
            }
        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%1s", &map[i][j]);
    
    BFS(0, 0);
    
    printf("%d\n", depth[N - 1][M - 1] + 1);
}
 */
