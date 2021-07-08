#include <iostream>
using namespace std;

int main()
{
    int test, carprice, option, option_p, option_n;
    
    cin >> test;
    
    while (test--)
    {
        cin >> carprice >> option;
        
        int sum = carprice;
        
        for (int i = 0; i < option; i++)
        {
            cin >> option_n >> option_p;
            sum += (option_n * option_p);
        }
        
        cout << sum << endl;
    }
}
