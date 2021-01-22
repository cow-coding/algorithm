#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        
        for (int k = 1; k < i; k++) {
            cout << " ";
        }
        for (int j = 0; j <= num - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
