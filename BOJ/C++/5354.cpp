#include <iostream>
using namespace std;

int main()
{
    int test, n;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> n;
        
        for (int i = 0 ; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0 || j == n - 1 || i == n - 1)
                    cout << "#";
                else
                    cout << "J";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
