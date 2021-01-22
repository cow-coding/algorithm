#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < 2 * (test - i) - 1; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}
