#include <iostream>
#include <string>
using namespace std;

int main()
{
    string code;

    while (1)
    {
        getline(cin, code);
        
        if (code == "END")
            break;
        
        for (int i = code.size() - 1; i >= 0; i--)
        {
            cout << code[i];
        }
        cout << endl;
    }
}
