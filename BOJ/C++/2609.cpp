#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1, num2, tmp1, tmp2;
    
    cin >> num1 >> num2;
    tmp1 = num1;
    tmp2 = num2;
    
    int rmin = min(num1, num2);
    
    for (int i = rmin; i > 0 ; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
    
    while (num1 != num2)
    {
        if (num1 > num2)
            num2 += tmp2;
        else
            num1 += tmp1;
    }
    cout << num1 << endl;
}
