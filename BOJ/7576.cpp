#include <iostream>
#include <queue>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

typedef pair<int, int> P; // P(i, j) = (y, x)
const int dirx[4] = {0,0,1,-1};
const int diry[4] = {-1,1,0,0};
int map[1001][1001];
int N, M;
bool visit[1001][1001];
int day = 0;
int cnt = 0;
queue<P> start;
queue<P> Q;

void BFS() {
    visit[Q.front().first][Q.front().second] = true;
    
    while (!Q.empty()) {
        int qsize = Q.size();
        
        for (int i = 0; i < qsize; i++) {
            int x = Q.front().second;
            int y = Q.front().first;
            Q.pop();
            
            if (map[y][x] == 0) // In BFS, It means adjenct tomato
                map[y][x] = day;
            
            for (int i = 0; i < 4; i++) {
                int nx = x + dirx[i];
                int ny = y + diry[i];
                
                if (ny >= 0 && ny < M && nx >= 0 && nx < N) {
                    if (map[ny][nx] == 0 && !visit[ny][nx]) {
                        cnt++;
                        visit[ny][nx] = true;
                        Q.push(P(ny, nx));
                    }
                }
            }
        }
        
        if (cnt != 0) {
            day++;
        }
        
    }
}


int main() {
    
    cin >> N >> M;
    
    // map making
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
            
            if (map[i][j] == 1)
                start.push(P(i,j)); // start point save queue
        }
    
    int iter = start.size();
    

    Q = start;
    BFS();
    
    
    int ans = 0;
    bool answerflag = true; // if ans = true
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] == 0) {
                answerflag = false;
                break;
            }
            ans = max(ans,map[i][j]);
        }
        
        if (!answerflag)
            break;
    }
    
    if (cnt == 0) {
        ans = 0;
    }
    
    if (!answerflag) {
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
    
}
