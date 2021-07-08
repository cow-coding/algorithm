#include <iostream>
using namespace std;

int main()
{
    long long dp[101] = {0, 1, 1, 1, 2, 2, 3, };
    int test, num;
    
    cin >> test;
    
    for (int i = 7; i <= 101; i++)
        dp[i] = dp[i - 1] + dp[i - 5];
    
    while (test--)
    {
        cin >> num;
        
        cout << dp[num] << "\n";
    }
}
