#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    int x, y;
    int inverse;

    cin >> a >> b >> c >> d >> e >> f;

    inverse = a * e - b * d;

    x = (e * c - b * f) / inverse;
    y = (-d * c +a * f) / inverse;

    cout << x << " " << y << "\n";
}
