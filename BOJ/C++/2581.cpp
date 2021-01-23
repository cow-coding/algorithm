#include <iostream>
#include <cmath>
using namespace std;

const int INF = 1000000000;

int main()
{
    int m, n;
    int min = INF, sum = 0;
    
    cin >> m >> n;
    
    
    for (int i = m; i <= n; i++) {
        
        if (i == 1) continue;
        
        bool check = true;
        
        for (int j = 2; j <= sqrt(i); j++) {
            
            if (i % j == 0) // 소수가 아닌경우
            {
                check = false;
                break;
            }
            
        }
        
        if (check) {
            if (i <= min)
                min = i;
            
            sum += i;
        }
    }
    
    if (min >= INF) {
        cout << "-1\n";
        
        return 0;
    }
    
    cout << sum << "\n" << min << "\n";
}
