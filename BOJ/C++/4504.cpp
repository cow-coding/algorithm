#include <iostream>
using namespace std;

int main()
{
    int n;
    int num;
    
    cin >> n;
    
    while (1)
    {
        cin >> num;
        
        if (num == 0)
            break;
        
        if (num % n == 0)
            cout << num << " is a multiple of " << n << "." << endl;
        else if (num % n != 0)
            cout << num << " is NOT a multiple of " << n << "." << endl;
    }
    
    return 0;
}
