#include <iostream>
#include <string>
using namespace std;

int dial(char);

int main()
{
    string word;
    int sum{0};
    
    cin >> word;
    
    for (int i = 0; i < word.size(); i++)
    {
        sum += dial(word[i]);
    }
    
    cout << sum << endl;
    
}

int dial(char c)
{
    int num;
    
    switch (c)
    {
        case 'A':
        case 'B':
        case 'C':
            num = 3;
            break;
            
        case 'D':
        case 'E':
        case 'F':
            num = 4;
            break;
            
        case 'G':
        case 'H':
        case 'I':
            num = 5;
            break;
            
        case 'J':
        case 'K':
        case 'L':
            num = 6;
            break;
            
        case 'M':
        case 'N':
        case 'O':
            num = 7;
            break;
            
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            num = 8;
            break;
            
        case 'T':
        case 'U':
        case 'V':
            num = 9;
            break;
            
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            num = 10;
            break;
    }
    return num;
}
