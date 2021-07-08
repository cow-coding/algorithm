#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    bool arr[200000] = {false, }; // 소수면 false고 아니면 true다
    
    while (1)
    {
        cin >> num;
        
        if (num == 0)
            break;
        
        int cnt{0};
        
        for (int i = num + 1; i <= 2 * num; i++)
        {
            if (i == 2)
            {
                cnt++;
                continue;
            }
            
            int j;
            
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                    break;
            }
            
            if (sqrt(i) < j)
                cnt++;
        }
        
        
        
        cout << cnt << endl;
    }
}
