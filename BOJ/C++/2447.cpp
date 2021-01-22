#include <iostream>
using namespace std;

const int MAX = 2188;
bool ans[MAX][MAX];

void func(int y, int x, int k) {
    if (k == 1) {
        ans[y][x] = 1;
        return;
    }
    
    int t = k / 3;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) continue;
            func(y + i * t, x + j * t, k / 3);
        }
    }
}

int main() {
    int N;
    
    cin >> N;
    
    func(0, 0, N);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << (ans[i][j] ? '*' : ' ');
        }
        cout << "\n";
    }
}
