#include <iostream>
using namespace std;

int main()
{
    int fNum, sNum;
    
    while (1)
    {
        cin >> fNum >> sNum;
        
        if (fNum == 0 && sNum == 0)
            break;
        
        if (fNum > sNum)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
