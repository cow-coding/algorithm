#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test, loop;
    string word;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> loop;
        cin >> word;
        
        for (int j = 0; j < word.size(); j++)
        {
            for (int k = 0; k < loop; k++)
            {
                cout << word[j];
            }
        }
        cout << endl;
    }
    return 0;
}
