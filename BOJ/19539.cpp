#include <queue>
#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int tree;

        cin >> tree;

        if (tree == 3) cnt3++;
        else if (tree % 2 == 0) cnt2 += tree / 2;
        else if (tree % 2 == 1) {
            cnt2 += tree / 2;
            cnt1++;
        }

        sum += tree;
    }

    if (sum % 3 != 0) {
        // 3배수 아니면 무조건 커트
        cout << "NO\n";
        return 0;
    }

    if (cnt1 == 0 && cnt2 != 0 && cnt3 == 0) {
        cout << "YES\n";
        return 0;
    }

    if ((cnt2 - cnt1) % 3 == 0 && (cnt2 - cnt1) >= 0) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}
