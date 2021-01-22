#include <iostream>
using namespace std;

int main() {

    int k = 1;
    int range;
    int left = 1;
    int right;
    int n;
    
    cin >> n;
    
    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }
    
    while (true) {
        range = 6 * k;
        right = left + range;
        if (left < n && n <= right) {
            cout << k + 1 << "\n";
            return 0;
        }
        k++;
        left = right;
    }
}
