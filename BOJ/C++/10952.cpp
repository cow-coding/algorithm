#include <iostream>
using namespace std;

int main()
{
    int test, fNum, sNum, sum;
    
    while (1)
    {
        cin >> fNum >> sNum;
        
        if (fNum == 0 && sNum == 0)
            break;
        
        sum = fNum + sNum;
        cout << sum << "\n";
    }
    
    return 0;
}
