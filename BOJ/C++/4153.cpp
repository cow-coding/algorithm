#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool cal(int num1, int num2, int num3)
{
    int tmp = max(num1, num2);
    int maxi = max(tmp, num3);
    
    if (maxi == num1)
    {
        if (pow(num1, 2) == pow(num2, 2) + pow(num3, 2))
            return true;
        else
            return false;
    } else if (maxi == num2)
    {
        if (pow(num2, 2) == pow(num1, 2) + pow(num3, 2))
            return true;
        else
            return false;
    } else
    {
        if (pow(num3, 2) == pow(num1, 2) + pow(num2, 2))
            return true;
        else
            return false;
    }
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    bool ret;
    
    while (1)
    {
        cin >> num1 >> num2 >> num3;
        
        if (num1 == 0 && num2 == 0 && num3 == 0)
            break;
        
        ret = cal(num1, num2, num3);
        
        if (ret == true)
            cout << "right\n";
        else
            cout << "wrong\n";
    }
}
