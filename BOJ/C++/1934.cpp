#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    int num1, num2, tmp1, tmp2;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> num1 >> num2;
        tmp1 = num1;
        tmp2 = num2;
        
        while (num1 != num2)
        {
            if (num1 < num2)
            {
                num1 += tmp1;
            } else
            {
                num2 += tmp2;
            }
        }
        cout << num1 << endl;
    }
}
