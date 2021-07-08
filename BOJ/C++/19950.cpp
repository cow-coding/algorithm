#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int arr[110] = {0, };
    int N, K;
    int sum = 0;
    int sx, sy, sz;
    int ex, ey, ez;
    double dist;

    cin >> sx >> sy >> sz;
    cin >> ex >> ey >> ez;

    int dx = (ex-sx) * (ex-sx);
    int dy = (ey-sy) * (ey-sy);
    int dz = (ez-sz) * (ez-sz);
    dist = sqrt(dx + dy + dz);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> K;
        arr[i] = K;
        sum += K;
    }

    sort(arr, arr + N);

    if (sum < dist) {
        cout << "NO\n";
        return 0;
    }

    int maxi = arr[N - 1];
    sum = sum - maxi;

    if (maxi > dist + sum) {
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
}
