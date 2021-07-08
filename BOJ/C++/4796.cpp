#include <iostream>
using namespace std;

int main()
{
    int cnt{1};
    while (1)
    {
        unsigned long long int L, P, V;
        
        cin >> L >> P >> V;
        
        if (L ==0 && P == 0 && V == 0)
            break;
        else {
            unsigned long long int tmp;
            
            tmp = V % P;
            
            if (tmp <= L)
                tmp = tmp;
            else if (tmp > L)
                tmp = L;
            
            unsigned int day = (V / P) * L + tmp;
            
            cout << "Case " << cnt << ": " << day << "\n";
            cnt++;
        }
    }
    
    return 0;
    
}
