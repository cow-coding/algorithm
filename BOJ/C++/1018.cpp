#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int N, M;
string map[20];
string white[8] = {{"WBWBWBWB"},{"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"},{"WBWBWBWB"}, {"BWBWBWBW"},{"WBWBWBWB"}, {"BWBWBWBW"}};
string black[8] = {{"BWBWBWBW"}, {"WBWBWBWB"},{"BWBWBWBW"}, {"WBWBWBWB"},{"BWBWBWBW"}, {"WBWBWBWB"},{"BWBWBWBW"}, {"WBWBWBWB"}};

int wcheck(int x, int y) {
    int cnt = 0;
    
    for (int i = y; i + 7 < N; i++) {
        for (int j = x; j + 7 < M; j++) {
            if (map[i][j] != white[i-y][j-x]) {
                cnt++;
            }
        }
    }
    
    return cnt;
}

int bcheck(int x, int y) {
    int cnt = 0;
    
    for (int i = y; i + 7 < N; i++) {
        for (int j = x; j + 7 < M; j++) {
            if (map[i][j] != black[i - y][j-x]) {
                cnt++;
            }
        }
    }
    
    return cnt;
}

int main() {
    
    int result = 1000000;
    string input;
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        cin >> input;
    }
    
    for (int i = 0; i + 7 < N; i++) {
        for (int j = 0; j + 7 < M; j++) {
            int tmp = min(wcheck(j, i), bcheck(j, i));
            result = min(result, tmp);
        }
    }
    
    cout << result;
}
