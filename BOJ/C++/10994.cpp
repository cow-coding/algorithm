#include <iostream>
using namespace std;

bool arr[397][397];

void ans(int n, int x, int y) {
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1)
            for (int j = 0; j < n; j++) arr[x + i][y + j] = true;
        else {
            arr[x + i][y] = true;
            arr[x + i][y + n - 1] = true;
        }
    }
}

void outline(int n , int x, int y) {
    int l = 4 * n - 3;
    
    ans(l, x, y);
    
    if (n == 1) return;
    
    outline(n - 1, x + 2, y + 2);
}

int main() {
    int N;
    
    cin >> N;
    
    outline(N, 0, 0);
    
    for (int i = 0; i < 4 * N - 3; i++) {
        for (int j = 0; j < 4 * N - 3; j++) {
            cout << (arr[i][j] ? '*' : ' ');
        }
        cout << "\n";
    }
    
}
