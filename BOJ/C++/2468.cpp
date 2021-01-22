#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int N;
int map[101][101];
bool visit[101][101];
int dirx[4] = {0, 0, 1, -1};
int diry[4] = {1, -1, 0, 0};

void DFS(int x, int y, int rain)
{
    visit[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dirx[i];
        int ny = y + diry[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny < N)
            if (!visit[nx][ny] && map[nx][ny] > rain)
                DFS(nx, ny, rain);
    }
}

int main()
{
    int maxrain{0};
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            scanf("%d", &map[i][j]);
            
            if (maxrain < map[i][j])
                maxrain = map[i][j];
        }
    
    int ans{0};
    
    for (int i = 0; i <= maxrain; i++) {
        int ret{0};
        
        memset(visit, false, sizeof(visit)); // 강우량 높이를 변화시킬때마다 visit을 초기화
        
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (!visit[j][k] && map[j][k] > i) {
                    ret++;
                    DFS(j, k, i);
                }
            }
        }
        
        if (ans < ret)
            ans = ret;
        
    }
    
    printf("%d\n", ans);
}
