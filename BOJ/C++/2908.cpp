#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int _reverse(int);

int main()
{
    int num1, num2;
    
    cin >> num1 >> num2;
    
    cout << max(_reverse(num1), _reverse(num2)) << endl;
    
    return 0;
}

int _reverse(int num)
{
    int result{0}, tmp = num;
    
    for (int i = 0; i < 3; i++)
    {
        result += (tmp % 10) * pow(10, 2 - i);
        tmp = tmp / 10;
    }
    
    return result;
}
