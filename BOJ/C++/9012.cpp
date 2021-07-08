#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int test;
    string input;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        stack<char> print;
        cin >> input;
        
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '(' || print.empty())
                print.push(input[i]);
            else if (print.top() == '(')
                print.pop();
        }
        
        if (print.empty() == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
