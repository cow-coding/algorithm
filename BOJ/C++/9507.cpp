#include <iostream>
using namespace std;

typedef long long int ll;

ll dp[70];

ll koong(ll num)
{
    if (dp[num] != 0)
        return dp[num];
    
    if (num < 2)
        return 1;
    else if (num == 2)
        return 2;
    else if (num == 3)
        return 4;
    else
        return dp[num] = koong(num - 1) + koong(num - 2) + koong(num - 3) + koong(num - 4);
}

int main()
{
    int test;
    
    int num;
    
    cin >> test;
    
    while (test--) {
        cin >> num;
        
        cout << koong(num) << "\n";
    }
}
