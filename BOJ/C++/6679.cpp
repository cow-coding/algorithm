#include <iostream>
#include <vector>
using namespace std;

int cal(int n, int b) {
    int ret = 0;
    
    while (n) {
        ret += n % b;
        n /= b;
    }
    
    return ret;
}

int main() {
    vector<int> ans;

    int num = 2992;
    
    for (num = 1000; num <= 9999; num++) {
        if (cal(num, 10) == cal(num, 12) && cal(num, 10) == cal(num, 16)) {
            cout << num << "\n";
        }
    }
}
