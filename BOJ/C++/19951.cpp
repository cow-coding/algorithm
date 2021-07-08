#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    // N: 구간 크기, M: 쿼리 개수
    vector<int> field(N);
    vector<int> arr(N);
    vector<int> event(N + 1);

    for (int i = 0; i < N; i++) {
        int h;
        cin >> h;

        field[i] = h;
    }

    for (int i = 0, l, r, w; i < M; ++i) {
        // [l,r] 구간에 +w   ==   l부터 끝까지 +w && r + 1부터 끝까지 -w
        cin >> l >> r >> w;
        event[l - 1] += w;
        event[r] -= w;
    }

    for (int i = 0, x = 0; i < N; ++i)
        arr[i] = x += event[i];

    for (int i = 0; i < N; i++) {
        field[i] += arr[i];
        cout << field[i] << " ";
    }

    cout << "\n";



    return 0;
}
