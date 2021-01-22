#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int start, end;
    
    cin >> start >> end;
    
    if (start == 1 && end == 1)
        return 0;
    
    for (int i = start; i <= end; i++)
    {
        bool check = false;
        
        if (i == 1)
            continue;
        
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                check = true;
                break;
            }
        }
        
        if (check == false)
            cout << i << "\n";
    }
}
