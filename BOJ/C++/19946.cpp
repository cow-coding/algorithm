#include <iostream>
using namespace std;

typedef unsigned long long int ll;

int main() {
    ll arr[65][65];
    ll n;

    for (int i = 1; i < 65; i++) {
        arr[i][0] = 1;
        for (int j = 1; j < 65; j++) {
            arr[i][j] = arr[i][j - 1] * 2;

            if (i == j) arr[i][j] -= 1;
        }
    }

    cin >> n;

    for (int i = 1; i < 65; i++) {
        if (arr[i][64] == n) {
            cout << i << "\n";
            break;
        }
    }
}
