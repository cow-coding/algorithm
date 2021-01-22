#include <iostream>
using namespace std;

bool arr[3072][6144];

void ans(int x, int y, int n) {
    if (n == 3) {
        arr[y][x] = true;
        arr[y+1][x-1] = true;
        arr[y+1][x+1] = true;
        arr[y+2][x-2] = true;
        arr[y+2][x-1] = true;
        arr[y+2][x] = true;
        arr[y+2][x+1] = true;
        arr[y+2][x+2] = true;
        
        return;
    }
    
    int t = n / 2;
    
    ans(x, y, t);
    ans(x - t, y + t, n / 2);
    ans(x + t, y + t, n / 2);
    
}

int main() {
    int N;
    
    cin >> N;
    
    ans(N - 1, 0, N);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N - 1; j++) {
            cout << (arr[i][j] ? '*' : ' ');
        }
        cout << "\n";
    }
}
