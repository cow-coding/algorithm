#include <iostream>
using namespace std;

int main()
{
    int rem[41] = {0, };
    int cnt{0};
    
    for (int i = 0; i < 10; i++)
    {
        int input;
        cin >> input;
        
        rem[input % 42]++;
    }
    
    for (int i = 0; i < 42; i++) {
        if (rem[i] != 0)
            cnt++;
    }
    
    cout << cnt << "\n";
}
