#include <iostream>
using namespace std;

long long DP[10001];

long long cal(int num)
{
    if (DP[num] != 0)
        return DP[num] % 987654321;
    
    if (num == 0 || num == 2)
        DP[num] = 1 % 987654321;
    else if (num == 4)
        DP[num] = 2 % 987654321;
    else if (num == 6)
        DP[num] = 5 % 987654321;
    else
    {
        for (int i = 0; i < num; i += 2)
            DP[num] += (cal(i) * cal(num - (2 + i))) % 987654321;
    }
        
    return DP[num] % 987654321;
}

int main()
{
    int num;
    
    cin >> num;
    
    
    cout << cal(num) % 987654321 << "\n";
}
