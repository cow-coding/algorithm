#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<char> result;
    string input;
    
    getline(cin, input);
    
    for (int i = 0; i < input.size(); i++)
    {
        if (result.empty() == true)
        {
            if (input[i] == 'U')
                result.push(input[i]);
        }
        else if (result.empty() == false)
        {
            if (result.top() == 'U' && input[i] == 'C')
                result.push(input[i]);
            else if (result.size() == 2 && input[i] == 'P')
                result.push(input[i]);
            else if (result.top() == 'P' && input[i] == 'C')
                result.push(input[i]);
        }
    }
    
    if (result.size() == 4)
        cout << "I love UCPC\n";
    else
        cout <<  "I hate UCPC\n";
    
    return 0;
}
