#include <iostream>
using namespace std;

int main() {
    int x;

    cin >> x;

    if (x == 1) {
        cout << "1/1\n";
        return 0;
    }

    int sum = 1;
    long long cnt = 0;
    int num = 1;

    while (1) {
        sum++;
        cnt += num;

        if (cnt >= x) break;

        num++;
    }

    int child = 1, parent = 1;

    if (sum % 2)
        child = sum - 1;
    else
        parent = sum - 1;

    while (1) {
        if (cnt == x) break;

        if (sum % 2) {
            parent++;
            child--;
        }else {
            parent--;
            child++;
        }

        cnt--;
    }

    cout << child << "/" << parent << "\n";

    return 0;
}
