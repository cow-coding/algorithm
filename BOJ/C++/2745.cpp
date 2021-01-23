#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int B, result{0};
    string N;
    int cycle;
    int tmp;
    
    cin >> N >> B;
    
    cycle = N.size();
    
    
    if (B > 9) {
        while (cycle--)
        {
            tmp = N[cycle];
            
            if (tmp >= 65)
                result += ((tmp - 7) - '0') * pow(B, N.size() - 1 - cycle);
            else
                result += (tmp - '0') * pow(B, N.size() - 1 - cycle);
            
        }
    } else
    {
        while (cycle--)
        {
            tmp = N[cycle];
            
            result += (tmp - '0') * pow(B, N.size() - 1 - cycle);
        }
    }
    
    cout << result << endl;
}
