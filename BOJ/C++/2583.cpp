#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, K;
int ans{0};
int cnt{0};
bool map[100][100];
bool visit[100][100];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y)
{
    cnt++;
    visit[x][y] = true;
    
    for (int i = 0 ; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            if (!visit[nx][ny] && !map[nx][ny]) {
                dfs(nx, ny);
            }
        }
    }
    
}

int main()
{
    vector<int> result;
    
    cin >> M >> N >> K;
    
    for (int i = 0; i < K; i++) {
        int x1, y1, x2, y2;
        
        cin >> x1 >> y1 >> x2 >> y2;
        
        for (int i = y1; i < y2; i++) {
            for (int j = x1; j < x2; j++) {
                map[i][j] = true;
            }
        }
    }
    
    for (int i = 0; i < M; i++) {
        
        for (int j = 0; j < N; j++) {
            cnt = 0;
            
            if (!visit[i][j] && !map[i][j]) {
                ans++;
                dfs(i, j);
                result.push_back(cnt);
            }
        }
    }
    
    sort(result.begin(), result.end());
    
    cout << ans << "\n";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    
}
