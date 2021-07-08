#include <iostream>
using namespace std;

int main() {
    int N, M;

    cin >> N >> M;



    if (M <= N) {
        if (M == 1 || M == 2) {
            // 1학년 2학년
            cout << "NEWBIE!\n";
            return 0;
        }

        if (M != 1 && M != 2) {
            cout << "OLDBIE!\n";
            return 0;
        }
    }

    cout << "TLE!\n";
}
