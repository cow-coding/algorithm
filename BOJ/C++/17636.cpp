#include <iostream>
using namespace std;

char transpose(char c) {
    char ret = '\0';
    
    switch (c) {
        case 46: ret = '.'; break;
        case 79: ret = 'O'; break;
        case 45: ret = '|'; break;
        case 124: ret = '-'; break;
        case 47: ret = '\\'; break;
        case 92: ret = '/'; break;
        case 94: ret = '<'; break;
        case 60: ret = 'v'; break;
        case 118: ret = '>'; break;
        case 62: ret = '^'; break;
    }
    
    return ret;
}

int main() {
    char map[100][100];
    char ans[100][100];
    int N, M;
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j > -1; j--) {
            char in = transpose(map[i][j]);
            
            ans[M - j - 1][i] = in;
        }
    }
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << ans[i][j];
        }
        cout << "\n";
    }
}
