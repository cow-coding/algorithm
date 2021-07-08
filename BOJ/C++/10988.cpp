#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int cnt{0};
    
    cin >> input;
    
    for (int i = 0; i < input.size() / 2; i++)
    {
        if (input[i] == input[input.size() - 1 - i])
            cnt++;
    }
    
    if (cnt == input.size() / 2)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
