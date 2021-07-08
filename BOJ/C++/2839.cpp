#include <iostream>
using namespace std;

int main() {
    int N;
    int rotate = 0;
    int check;
    int result = -1;

    cin >> N;

    while (rotate < 5) {
        if (N - 3 * rotate < 0) break;

        check = (N - 3 * rotate) % 5;

        if (check == 0) {
            result = (N - 3 * rotate) / 5 + rotate;
        }

        rotate++;
    }

    cout << result << "\n";
}
