#include <iostream>
#include <string>
using namespace std;


int main()
{
    int test;
    
    cin >> test;
    
    cin.ignore();
    
    for (int i = 0; i < test; i++)
    {
        string input;
        
        getline(cin, input);
        
        if (input[0] >= 97 && input[0] <= 122)
            input[0] -= 32;
        
        if (input[i - 1] == ' ')
        {
            if (input[0] >= 97 && input[0] <= 122)
                input[i] -= 32;
        }
        
        cout << input << "\n";
    }
}
