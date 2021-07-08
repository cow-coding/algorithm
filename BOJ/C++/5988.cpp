#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    string num;
    
    cin >> test;
    
    while (test--)
    {
        cin >> num;
        
        if (num[num.size() - 1] % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
}
