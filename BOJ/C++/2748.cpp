#include <iostream>
using namespace std;

long long int dp[100];

long long int fibonacci(int n)
{
    if (dp[n] != 0)
        return dp[n];

    if (n <= 2)
        return 1;
    else if (n == 3)
        return 2;
    else
        dp[n] = fibonacci(n - 2) + fibonacci(n - 1);

    return dp[n];
}

int main()
{
    int N;
    cin >> N;

    cout << fibonacci(N) << "\n";
}
