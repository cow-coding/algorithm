#include <iostream>
using namespace std;

int main()
{
    int test;
    int nonad, ad, price;
    int result;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> nonad >> ad >> price;
        
        result = (ad - price) - nonad;
        
        if (result == 0)
            cout << "does not matter\n";
        else if (result < 0)
            cout << "do not advertise\n";
        else if (result > 0)
            cout << "advertise\n";
    }
}
