#include <iostream>
using namespace std;

int main()
{
    int test, tcnt{0}, fcnt{0};
    bool cute;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> cute;
        if (cute == true)
            tcnt++;
        else if (cute == false)
            fcnt++;
    }
    
    if (tcnt > fcnt)
        cout << "Junhee is cute!\n";
    else if (tcnt < fcnt)
        cout << "Junhee is not cute!\n";
    
    return 0;
}
