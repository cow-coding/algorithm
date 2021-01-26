#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

const int MAX = 1000000010;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;

    cin >> N >> M;
    
    vector<int> arr(N + 10, MAX);
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    sort(arr.begin(), arr.end());

    while (M--) {
        int find;
        int idx;

        cin >> find;

        idx = lower_bound(arr.begin(), arr.end(), find) - arr.begin();

        if (find != arr[idx]) cout << -1 << "\n";
        else cout << idx << "\n";
    }
}

