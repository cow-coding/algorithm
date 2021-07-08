#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int jx, jy;
    int bx, by;
    int dx, dy;
    
    int btime, dtime;
    
    cin >> bx >> by;
    cin >> dx >> dy;
    cin >> jx >> jy;
    
    if (abs(bx - jx) >= abs(by - jy))
        btime = abs(bx - jx);
    else if (abs(bx - jx) < abs(by - jy))
        btime = abs(by - jy);
    
    dtime = abs(dx - jx) + abs(dy - jy);
    
    if (dtime == btime)
        cout << "tie\n";
    else if (dtime < btime)
        cout << "daisy\n";
    else if (dtime > btime)
        cout << "bessie\n";
    
    return 0;
}
