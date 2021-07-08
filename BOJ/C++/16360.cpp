#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    string word;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> word;
        
        switch (word[word.size() - 1])
        {
            case 'a':
            case 'o':
            case 'u':
                word += "s";
                break;
                
            case 'i':
                word += "os";
                break;
                
            case 'y':
                word[word.size() - 1] = 'i';
                word += "os";
                break;
                
            case 'l':
            case 'r':
            case 'v':
                word += "es";
                break;
                
            case 'e':
                if (word[word.size() - 2] == 'n')
                {
                    word[word.size() - 2] = 'a';
                    word[word.size() - 1] = 'n';
                    word += "es";
                } else
                    word += "us";
                break;
                
            case 'n':
                word[word.size() - 1] = 'a';
                word += "nes";
                break;
                
            case 'w':
            case 't':
                word += "as";
                break;
                
            default:
                word += "us";
                break;
        }
        
        cout << word << endl;
    }
}
