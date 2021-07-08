#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int cnt{0};

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        switch(input[i])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u': cnt++;
        }
    }

    cout << cnt << "\n";
}
