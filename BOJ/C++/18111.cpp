#include <iostream>
using namespace std;

int main() {
    int N, M, B;
    int mint = INT_MAX;
    int maxh = INT_MIN;
    int map[501][501] = {0,};
    
    cin >> N >> M >> B;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }
    
    for (int h = 0; h < 257; h++) {
        int inv = 0;
        int rem = 0;
        
        for (int i = 0 ; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int curr = map[i][j] - h;
                
                if (curr < 0) {
                    inv -= curr;
                }else {
                    rem += curr;
                }
            }
        }
        
        if (rem + B >= inv) {
            int t = 2 * rem + inv;
            
            if (mint >= t) {
                mint = t;
                maxh = h;
            }
        }
    }
    
    cout << mint << " " << maxh << "\n";
}
