#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int dirx[4] = {1, 0, -1, 0};
const int diry[4] = {0, 1, 0, -1};

int map[25][25];
bool visit[25][25];
int N;
int cnt{0};

void dfs(int x, int y)
{
    cnt++;
    visit[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dirx[i];
        int ny = y + diry[i];
        
        if (nx >= 0 && nx < N && ny >= 0 && ny < N)
            if (!visit[nx][ny] && map[nx][ny] == 1) {
                dfs(nx, ny);
            }
    }
}

int main()
{
    int ret{0};
    vector<int> ans;
    cin >> N;
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%1d", &map[i][j]);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cnt = 0;
            
            if (!visit[i][j] && map[i][j] == 1) {
                ret++;
                
                dfs(i, j);
                ans.push_back(cnt);
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    
    cout << ret << "\n";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }
    
}
