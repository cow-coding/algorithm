#include <iostream>
#include <bitset>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;

    cin >> n;

    string bit = bitset<32>(n).to_string();
    bool start = false;
    int cnt = 0;

    if (n == 0) {
        cout << 1 << "\n";
        return 0;
    }

    for (int i = 0; i < bit.size(); i++) {
        if (bit[i] == '1' && !start) {
            start = true;
            cnt++;
            continue;
        }

        if (start) {
            cnt++;
        }
    }

    cout << cnt << "\n";
}
