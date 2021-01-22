#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000010];

int cal(int num);

int main()
{
    int num;
    
    cin >> num;
    
    cout << cal(num) << endl;
    
}

int cal(int num)
{
    int tmp;
    
    if (dp[num] != 0)
        return dp[num];
    
    if (num <= 1)
        return dp[num] = 0;
    else if (num <= 3)
        return dp[num] = 1;
    else
    {
        if (num % 3 == 0)
        {
            if (num % 2 == 0)
            {
                tmp = min(cal(num / 2), cal(num / 3));
                dp[num] = min(tmp, cal(num - 1)) + 1;
            }
            else
                dp[num] = min(cal(num - 1), cal(num / 3)) + 1;
            
        } else if (num % 2 == 0)
            dp[num] = min(cal(num - 1), cal(num / 2)) + 1;
        else
            dp[num] = cal(num - 1) + 1;
    }
    
    return dp[num];
}


