#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

char map[101][101];
char rmap[101][101];
bool visit[101][101];
int dirx[4] = {0, 1, -1, 0};
int diry[4] = {1, 0, 0, -1};
int N;

void DFS(int x, int y, char c)
{
    visit[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dirx[i];
        int ny = y + diry[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny <N) {
            if (!visit[nx][ny] && map[nx][ny] == c)
                DFS(nx, ny, c);
        }
    }
}

void RDFS(int x, int y, char c)
{
    visit[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dirx[i];
        int ny = y + diry[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny <N) {
            if (!visit[nx][ny] && rmap[nx][ny] == c)
                RDFS(nx, ny, c);
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string input;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%1s", &map[i][j]);
            
            if (map[i][j] == 'R' || map[i][j] == 'G')
                rmap[i][j] = 'R';
            else
                rmap[i][j] = map[i][j];
        }
    }
    
    int r{0};
    int n{0};
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visit[i][j] && rmap[i][j] == 'R') {
                r++;
                RDFS(i, j, 'R');
            } else if (!visit[i][j] && rmap[i][j] == 'B') {
                r++;
                RDFS(i, j, 'B');
            }
        }
    }
    
    memset(visit, 0, sizeof(visit));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visit[i][j] && map[i][j] == 'R') {
                n++;
                DFS(i, j, 'R');
            } else if (!visit[i][j] && map[i][j] == 'B') {
                n++;
                DFS(i, j, 'B');
            } else if (!visit[i][j] && map[i][j] == 'G') {
                n++;
                DFS(i, j, 'G');
            }
        }
    }
    
    
    printf("%d %d\n", n, r);
}
