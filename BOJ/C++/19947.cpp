#include <iostream>
#include <cmath>
using namespace std;

int year[3] = {1, 3, 5};
float pay[3] = {0.05, 0.2f, 0.35f};
int H, Y;
long long ans = 0;

void cal(int y, int num, long long money) {
    if (y >= Y) {
        if (money > ans) {
            ans = money;
        }

        return;
    }

    for (int i = 0; i < 3; i++) {
        int next_money = money + floor(money * pay[i]);
        int next_year = y + year[i];

        if (next_year > Y)
            cal(next_year, i, money);
        else cal(next_year, i, next_money);
    }

}

int main() {

    cin >> H >> Y;

    cal(0, 0, H);

    cout << ans << "\n";
}
