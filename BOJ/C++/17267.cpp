#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;

struct INFO {
    int x;
    int y;
    int r;
    int l;
};

typedef pair<int, int> P;
char map[1001][1001];
bool visit[1001][1001];
queue<INFO> Q;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int ans{0};
int N, M;
int L, R;
int startx, starty;
int cntd = 1;
int cntu = 1;

void bfs() {
    visit[starty][startx] = true;
    
    Q.push({startx, starty, R, L});
    
    while (!Q.empty()) {
        INFO curr = Q.front();
        Q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];
            int currL = curr.l;
            int currR = curr.r;
            
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                if (map[ny][nx] == '0' && !visit[ny][nx]) {
                    if (i == 0 && currR > 0) {
                        // use right
                        visit[ny][nx] = true;
                        Q.push({nx, ny, currR - 1, currL});
                    }else if (i == 1 && currL > 0) {
                        // use left
                        visit[ny][nx] = true;
                        Q.push({nx, ny, currR, currL - 1});
                    }else if (i == 2) {
                        cntd = 1;
                        // use down
                        // visit[ny][nx] = true;
                        ny -= dy[i];
                        while (1) {
                            ny += dy[i];
                            if((ny >= 0 && ny < N) && map[ny][nx] == '0') {
                                visit[ny][nx] = true;
                                Q.push({nx, ny, currR, currL});
                            }else break;
                        }
                        
                    }else if (i == 3) {
                        cntu = 1;
                        // use up
                        // visit[ny][nx] = true;
                        // int tmpy = ny;
                        ny -= dy[i];
                        while (1) {
                            ny += dy[i];
                            if((ny >= 0 && ny < N) && map[ny][nx] == '0') {
                                visit[ny][nx] = true;
                                Q.push({nx, ny, currR, currL});
                            }else break;
                            
                        }
                        
                    }
                }
            }
        }
    }
}

int main()
{
    
    
    scanf("%d %d", &N, &M);
    scanf("%d %d", &L, &R);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            scanf("%1s", &map[i][j]);
            
            if (map[i][j] == '2') {
                starty = i;
                startx = j;
            }
        }
    
    bfs();
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (visit[i][j]) ans++;
        }
    }
    
    printf("%d\n", ans);
    
}
