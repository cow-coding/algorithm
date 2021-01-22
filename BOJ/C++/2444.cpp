#include <iostream>
using namespace std;

int main()
{
    int line;
    
    cin >> line;
    
    for (int i = 0; i < line; i++)
    {
        for (int j = 1; j < line - i; j++)
            cout << " ";
        for (int k = 0; k < 2 * i + 1; k++)
            cout << "*";
        cout << endl;
    }
    
    for (int i = 1; i < line; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int k = 1; k < 2 * (line - i) ; k++)
            cout << "*";
        cout << endl;
    }
}
