#include <iostream>
using namespace std;

unsigned long long dp[31];

unsigned long long fac(int num)
{
    if (dp[num] != 0)
        return dp[num];
    
    if (num <= 1)
        return 1;
    else
        dp[num] = num * fac(num - 1);
    
    return dp[num];
}

int main()
{
    int num1, num2, test;
    
    cin >> test;
    
    while (test--) {
        cin >> num1 >> num2;
        
        cout << fac(num2) / (fac(num2 - num1) * fac(num1)) << "\n"  ;
    }
}
