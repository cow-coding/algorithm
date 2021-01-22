#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dwarf[10];
    int sum{0};
    int tmp1, tmp2;
    bool check = false;
    
    for (int i = 1; i <= 9; i++)
    {
        cin >> dwarf[i];
        sum += dwarf[i];
    }
    
    sort(dwarf, dwarf + 10);
    
    for (int i = 9; i > 0; i--)
    {
        for (int j = i - 1; j > 0; j--)
        {
            int ret = dwarf[i] + dwarf[j];
            
            if (sum - ret == 100)
            {
                tmp1 = i;
                tmp2 = j;
                check = true;
                break;
            }
        }
        
        if (check)
            break;
    }
    
    for (int i = 1; i <= 9; i++)
    {
        if ( i == tmp1 || i == tmp2 )
            continue;
        
        cout << dwarf[i] << endl;
    }
}
