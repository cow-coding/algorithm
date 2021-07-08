#include <iostream>
using namespace std;

int main() {
    int K;
    int dpa[50] = {1, 0, };
    int dpb[50] = {0, 1, };
    
    cin >> K;
    
    for (int i = 1; i <= K; i++) {
        dpa[i] = dpb[i - 1];
        dpb[i] = dpa[i - 1] + dpb[i - 1];
    }
    
    cout << dpa[K] << " " << dpb[K] << "\n";
}
