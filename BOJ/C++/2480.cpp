#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    int result, money;
    int seq, maximum;
    
    cin >> a >> b >> c;
    
    seq = max(a, b);
    maximum = max(seq, c);
    
    if (a == b)
    {
        if (b == c)
        {
            result = a;
            money = 10000 + result * 1000;
        } else {
            result = a;
            money = 1000 + result * 100;
        }
        cout << money << "\n";
    }
    
    if (a != b)
    {
        if (b == c)
        {
            result = b;
            money = 1000 + result * 100;
        } else
        {
            if (a == c)
            {
                result = a;
                money = 1000 + result * 100;
            } else {
                result = maximum;
                money = result * 100;
            }
        }
        cout << money << "\n";
    }
}
