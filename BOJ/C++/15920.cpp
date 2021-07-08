#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int flag = 0;
    int curr = 1;
    string cmd;
    
    cin >> N >> cmd;
    
    for (auto ch : cmd) {
        if (ch == 'W') {
            curr++;
        }else {
            if (curr == 2) flag = 2;
            else if (curr == 1 && flag == 0) flag = 1;
            else if (curr == 1 && flag == 1) flag = 0;
        }
    }
    
    if (curr >= 3) {
        if (flag == 0) cout << 5 << "\n";
        else if (flag == 1) cout << 1 << "\n";
        else cout << 6 << "\n";
    }else {
        cout << 0 << "\n";
    }
}
