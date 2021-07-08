#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int dx[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
int dy[8] = {0, -1, 1, 0, 1, -1, 1, -1};

int map[51][51];
bool visit[51][51];
int w, h; // w는 j변수 , h는 i변수

void dfs(int x, int y)
{
    visit[x][y] = true;
    
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
            if (!visit[nx][ny] && map[nx][ny] == 1) {
                dfs(nx, ny);
            }
        }
    }
}

int main()
{
    while (1) {
        int island{0};
        memset(map, 0, sizeof(map));
        memset(visit, false, sizeof(visit));
        
        scanf("%d %d", &w, &h);
        
        if (w == 0 && h == 0) break;
        
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                scanf("%d", &map[i][j]);
        
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                // dfs가 실행되면 섬 탐색 시작
                if (!visit[i][j] && map[i][j] == 1) {
                    island++;
                    dfs(i, j);
                }
            }
        }
        
        printf("%d\n", island);
    }
}
