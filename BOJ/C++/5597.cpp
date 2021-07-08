#include <iostream>
using namespace std;

int main()
{
    bool check[31] = {false};
    
    for (int i = 0; i < 28; i++)
    {
        int input;
        cin >> input;
        check[input] = true;
    }
    
    for (int i = 1; i < 31; i++)
    {
        if (check[i] == false)
            cout << i << endl;
    }
    
    
    return 0;
}
