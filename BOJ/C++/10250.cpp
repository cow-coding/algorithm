#include <iostream>
using namespace std;

int main() {
    
    int T, N, H, W;
    
    cin >> T;
    
    while (T--) {
        cin >> H >> W >> N;
        
        if (N % H == 0)
            cout << H * 100 + (N / H) << "\n";
        else
            cout << (N % H) * 100 + (N / H + 1) << "\n";
    }
}
