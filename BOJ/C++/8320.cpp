#include <iostream>
using namespace std;

int main()
{
    int num, cnt{0};
    
    cin >> num;
    
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; i * j <= num; j++)
        {
            cnt++;
        }
    }
    
    cout << cnt;
}
