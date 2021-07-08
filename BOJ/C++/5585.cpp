#include <iostream>
using namespace std;

int main()
{
    int coin[] = {500, 100, 50, 10, 5, 1};
    int cnt{0};
    int pay;
    int gusrm;
    
    cin >> pay;
    gusrm = 1000 - pay;
    
    for (int i = 0; i < 6; i++)
    {
        while (gusrm - coin[i] >= 0)
        {
            gusrm -= coin[i];
            cnt++;
            
            if (gusrm == 0)
                break;
        }
    }
    
    cout << cnt << endl;
}
