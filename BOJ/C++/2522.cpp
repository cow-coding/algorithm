#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < N - i; j++)
            cout << " ";
        
        for (int k = 0; k < i; k++)
            cout << "*";
        
        cout << endl;
    }
    
    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        
        for (int k = N - i; k > 0; k--)
            cout << "*";
        
        cout << endl;
    }
    
}
