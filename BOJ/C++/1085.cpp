#include <iostream>
using namespace std;

int min(int a, int b)
{
    if (a <= b) {
        return a;
    } else
        return b;
}

int main()
{
    int x, y, w, h, dx{0}, dy{0};
    cin >> x >> y >> w >> h;

    dx = h - y;
    dy = w - x;

    cout << min(x , min(y, min(dx, dy))) << "\n";
}
