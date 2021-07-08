#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int coin[10] = {0};
    int test, money;
    int cnt{0};
    
    cin >> test >> money;
    
    for (int i = 0; i < test; i++)
        cin >> coin[i];
    
    sort(coin, coin + 10, greater<int>());
    
    for (int i = 0; i < 10; i++)
    {
        if (coin[i] == 0)
            break;
        
        while (money - coin[i] >= 0)
        {
            money -= coin[i];
            cnt++;
            
            if (money == 0)
                break;
        }
    }
    
    cout << cnt << endl;
}
