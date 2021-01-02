#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> calc;
    char input;
    
    cin >> input;
    
    calc.push_back(input);
    
    while (input != 13)
    {
        cin >> input;
        calc.push_back(input);
    }
}
