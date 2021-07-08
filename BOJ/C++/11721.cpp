#include <iostream>
using namespace std;

int main()
{
    int i;
    char word[100] = {0};
    
    cin >> word;
    
    for (i = 0; i < 100; i++)
    {
        if (word[i] == '\0')
        {
            break;
        }
    }
    for (int j = 0; j < i; j++)
    {
        cout << word[j];
        if ((j + 1) % 10 == 0)
        {
            cout << "\n";
        }
    }
}
