#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arrx[1001] = {0, };
    int arry[1001] = {0, };
    int ansx, ansy;
    
    for (int i = 0; i < 3; i++)
    {
        int x, y;
        
        cin >> x >> y;
        
        arrx[x]++;
        arry[y]++;
    }
    
    for (int i = 0; i < 1001; i++) {
        if (arrx[i] == 1)
            ansx = i;
        
        if (arry[i] == 1)
            ansy = i;
    }
    
    cout << ansx << " " << ansy << "\n";
    
}
