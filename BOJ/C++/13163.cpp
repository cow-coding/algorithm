#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    string input;
    
    cin >> test;
    cin.ignore();
    
    for (int i = 0; i < test; i++)
    {
        string god = "god";
        int cnt{0};
        getline(cin, input);
        
        for (int j = 0; j < input.size(); j++)
        {
            if (cnt == 0 && input[j] == ' ')
                cnt++;
            else if (cnt != 0 && input[j] != ' ')
                god += input[j];
        }
        
        cout << god << endl;
    }
}
