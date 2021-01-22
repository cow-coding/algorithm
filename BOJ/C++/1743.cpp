#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int N, M;
int dirx[4] = {1,0,-1,0};
int diry[4] = {0,1,0,-1};
int map[101][101];
bool visit[101][101];
typedef pair<int, int> P; // (r,c) = (j, i)
vector<P> pos;
int cnt = 0;
int maxi = 0;

void dfs(int r, int c) {
    cnt++;
    visit[r][c] = true;

    for (int i = 0; i < 4; i++) {
        int nr = r + dirx[i];
        int nc = c + diry[i];

        if (nr >= 0 && nr <= N && nc >= 0 && nc <= M) {
            if (!visit[nr][nc] && map[nr][nc] == 1) {
                dfs(nr, nc);
            }
        }
    }
}

int main() {
    int K;

    cin >> N >> M >> K;

    for (int i = 0; i < K; i++) {
        int r, c;

        cin >> r >> c;

        map[r][c] = 1;

        pos.push_back(P(r,c));
    }

    for (int i = 0; i < pos.size(); i++) {
        cnt = 0;
        dfs(pos[i].first,pos[i].second);

        if (cnt > maxi)
            maxi = cnt;
    }


    cout << maxi << "\n";
}
