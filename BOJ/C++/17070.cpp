#include <iostream>
using namespace std;

/*
 < 아이디어 >
 현재상태와 방향 변화를 기록한다.
 [방향변화]
 인덱스 0 : 가로 이동 + 가로 상태
 인덱스 1 : 세로 이동 + 세로 상태
 인덱스 2 : 대각선 이동 + 대각선 상태
 
 방향 인덱스 0일때, 현재 인덱스가 1이면 pass
 방향 인덱스 1일때, 현재 인덱스가 0이면 pass
 모든 경우를 찾아야하므로 방문 배열 생성 필요 없음
 */

int N;
int map[16][16];
int dx[3] = {0, 1, 1};
int dy[3] = {1, 0, 1};

int ans{0};

void dfs(int x, int y, int curr)
{
    if (x == N -1 && y == N - 1) {
        ans++;
        return;
    }
    
    for (int i = 0; i < 3; i++) {
        if ((i == 0 && curr == 1) || (i == 1 && curr == 0)) continue;
        
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
            if (i == 2) {
                if (map[nx][ny] != 1 && map[nx - 1][ny] != 1 && map[nx][ny - 1] != 1) {
                    dfs(nx, ny, i);
                }
            } else {
                if (map[nx][ny] != 1) {
                    dfs(nx, ny, i);
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> map[i][j];
    
    dfs(0, 1, 0);
    
    cout << ans << "\n";
}
