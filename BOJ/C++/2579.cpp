#include <iostream>
using namespace std;

int dp[301]; // dp[idx]는 idx까지 최대 값
int arr[301];
int Nstair;
int ret = 0;

int dfs()
{
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
    
    for (int i = 3; i < Nstair; i++) {
        dp[i] = max(dp[i - 2] + arr[i], arr[i - 1] + arr[i] + dp[i - 3]);
    }
    
    return dp[Nstair - 1];
}

int main()
{
    cin >> Nstair;
    
    for (int i = 0; i < Nstair; i++)
        cin >> arr[i];
    
    cout << dfs() << "\n";
}
