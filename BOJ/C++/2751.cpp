#include <iostream>
using namespace std;

bool num[2000001];
const int mid = 1000000;

int main() {
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int idx;
        
        cin >> idx;
        
        if (idx < 0) {
            // -1 -> 1000000 - 1 = 99999 = -1
            num[mid + idx] = true;
        }else{
            // 1 -> 1000000 + 1 = 1000001 = 1
            // 1000000 -> 2000000
            num[mid + idx] = true;
        }
    }
    
    for (int i = 0; i < 2000001; i++) {
        if (i < mid) {
            if (num[i]) {
                cout << i - mid << "\n";
            }
        }else {
            if (num[i]) {
                cout << i - mid << "\n";
            }
        }
    }
}
