#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int dirx[4] = {-1, 0, 0, 1};
int diry[4] = {0, -1, 1, 0};
int R, C;
int cnt;
int result = -1;
char map[20][20];
bool visit[20][20];
bool alphabet[26]; // A = 0 ~ Z = 25

void dfs(int x, int y) {
    visit[x][y] = true;
    cnt++;

    for (int i = 0; i < 4; i++) {
        int nx = x + dirx[i];
        int ny = y + diry[i];

        if (nx >= 0 && nx < R && ny >= 0 && ny < C) {
            if (!visit[nx][ny]) {
                char next_alphabet = map[nx][ny];

                if (!alphabet[next_alphabet - 'A']) {
                    alphabet[next_alphabet - 'A'] = true;
                    dfs(nx, ny);
                    alphabet[next_alphabet - 'A'] = false;
                    visit[nx][ny] = false;
                    cnt--;
                }
            }
        }

        if (i == 3)
            result = max(cnt, result);
    }
}


int main() {
    string input;

    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        cin >> input;
        for (int j = 0; j < C; j++) {
            map[i][j] = input[j];
        }
    }

    alphabet[map[0][0] - 'A'] = true;
    dfs(0, 0);

    cout << result << "\n";

}
