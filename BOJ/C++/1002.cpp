#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

unsigned long long int distance(int x1, int y1, int x2, int y2);

int main()
{
    int x1, x2, y1, y2, r1, r2;
    int test;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> x1 >> y1 >> r1;
        cin >> x2 >> y2 >> r2;

        int dx = x1 - x2;
        int dy = y1 - y2;
        int rmax = max(r1, r2);
        int rmin = min(r1, r2);

        double dis = sqrt(pow(dx, 2) + pow(dy, 2));

        if (dis == 0.0)
        {
            if (r1 == r2)
                cout << -1 << "\n";
            else
                cout << 0 << "\n";
        } else
        {
            if (rmax - rmin < dis && dis < rmax + rmin)
                cout << 2 << "\n";
            else if (dis == rmax + rmin || dis == rmax - rmin)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }



    }

    return 0;
}
