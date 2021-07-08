#include <iostream>
#include <utility>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

vector<pair<int, int>> position; // (x, y)순으로 저장
int N, M;
int map[8][8];
int cmap[8][8];
bool visit[8][8];
int dirx[4] = {1, 0, -1, 0};
int diry[4] = {0, -1, 0, 1};

void DFS(int x, int y)
{
    for (int i = 0; i < 4; i++) {
        int nx = x + dirx[i];
        int ny = y + diry[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (cmap[nx][ny] == 0) {
                cmap[nx][ny] = 2;
                DFS(nx, ny);
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            
            cmap[i][j] = map[i][j];
            
            if (!map[i][j])
                position.push_back(make_pair(i, j));
        }
    
    int maximum = 0;
    
    for (int i = 0; i < position.size() - 2; i++) {
        for (int j = i + 1; j < position.size() - 1; j++) {
            for (int k = j + 1; k < position.size(); k++) {
                pair<int, int> fir = position[i];
                pair<int, int> sec = position[j];
                pair<int, int> thir = position[k];
                
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < M; j++) {
                        cmap[i][j] = map[i][j];
                    }
                }
                
                cmap[fir.first][fir.second] = 1;
                cmap[sec.first][sec.second] = 1;
                cmap[thir.first][thir.second] = 1;
                
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < M; j++) {
                        if (cmap[i][j] == 2) {
                            DFS(i, j);
                        }
                    }
                }
                
                int cnt = 0;
                
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < M; j++) {
                        if (cmap[i][j] == 0) {
                            cnt++;
                        }
                    }
                }
                
                maximum = max(maximum, cnt);
                
            }
        }
    }
    
    cout << maximum << "\n";
}
