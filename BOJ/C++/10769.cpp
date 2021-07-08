#include <iostream>
using namespace std;

int main()
{
    string sentence = "0";
    int happy{0}, sad{0};
    
    getline(cin, sentence);
    
    for (int i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] == ':')
        {
            if (sentence[i + 1] == '-')
            {
                if (sentence[i + 2] == ')')
                    happy++;
                else if (sentence[i + 2] == '(')
                    sad++;
            }
        }
    }
    
    if (happy == 0 && sad == 0)
        cout << "none\n";
    else if (happy == sad)
        cout << "unsure\n";
    else if (happy > sad)
        cout << "happy\n";
    else if (happy < sad)
        cout << "sad\n";
    
    return 0;
}
