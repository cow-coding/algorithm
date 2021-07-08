#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    for (int i = 0; i < 100; i++)
    {
        getline(cin, input);
        
        if (input.size() == 0)
            break;
        
        int little = 0, big = 0, space = 0, num = 0;
        
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] - '0' >= 0 && input[i] - '0' <= 9)
                num++;
            else if (input[i] - 'a' >= 0 && input[i] - 'a' <= 25)
                little++;
            else if ((input[i] - 'A' >= 0 && input[i] - 'A' <= 25))
                big++;
            else
                space++;
        }
        
        cout << little << " " << big << " " << num << " " << space << "\n";
    }
}
