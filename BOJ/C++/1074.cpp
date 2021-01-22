#include <iostream>
#include <cmath>
using namespace std;

int N, R, C;
int cnt;

void Z(int size, int x, int y)
{
    if (x == C && y == R) {
        cout << cnt << "\n";
        return;
    }

    if (size == 1) {
        cnt++;
        return;
    }

    if (!(x <= C && C < x + size && y <= R && R < y + size)) {
        cnt += (size * size);
        return;
    }

    Z(size / 2, x, y);
    Z(size / 2, x + size / 2, y);
    Z(size / 2, x, y + size / 2);
    Z(size / 2, x + size / 2, y + size / 2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> R >> C;

    Z(pow(2, N), 0, 0);
}
