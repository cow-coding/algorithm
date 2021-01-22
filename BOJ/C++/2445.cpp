#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        for (int m = 0; m < 2 * (N - i); m++)
        {
            cout << " ";
        }
        
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // 위쪽 별 출력
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++)
            cout << "*";
        
        for (int k = 1; k <= 2 * i; k++) {
            cout << " ";
        }
        for (int m = 1; m <= N - i; m++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
