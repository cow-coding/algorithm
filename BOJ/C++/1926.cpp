#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef pair<int, int> P; // (row, col)

int n, m;
int drow[4] = {0, 0, 1, -1};
int dcol[4] = {-1, 1, 0, 0};
int map[510][510];
bool visit[510][510];
int cnt = 0;

void dfs(int row, int col) {
    visit[row][col] = true;
    cnt++;
    
    for (int i = 0; i < 4; i++) {
        int nrow = row + drow[i];
        int ncol = col + dcol[i];
        
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
            if (!visit[nrow][ncol] && map[nrow][ncol] == 1) {
                dfs(nrow, ncol);
            }
        }
    }
}

int main() {
    vector<P> start;
    int ans = 0;
    int pic = 0;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
            
            if (map[i][j] == 1) start.push_back(P(i, j));
        }
    }
    
    for (int i = 0; i < start.size(); i++) {
        int row = start[i].first;
        int col = start[i].second;
        cnt = 0;
        
        if (!visit[row][col] && map[row][col] == 1) {
            pic++;
            dfs(row, col);
        }
        
        if (cnt > ans) ans = cnt;
    }
    
    cout << pic << "\n" << ans << "\n";
}
