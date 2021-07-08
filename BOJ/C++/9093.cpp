#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    
    cin >> test;
    cin.ignore();
    
    while (test--)
    {
        string input;
        string tmp;
        
        getline(cin, input);
        
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == ' ')
            {
                reverse(tmp.begin(), tmp.end());
                cout << tmp << " ";
                tmp.clear();
            } else
                tmp += input[i];
        }
        
        reverse(tmp.begin(), tmp.end());
        cout << tmp << "\n";
    }
}
