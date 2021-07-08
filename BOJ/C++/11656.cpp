#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string input;
    vector<string> save;
    
    cin >> input;
    
    for (int i = 0; i < input.size(); i++) {
        string tmp;
        
        if (i == 0)
            save.push_back(input);
        else {
            for (int j = i; j < input.size(); j++) {
                tmp += input[j];
            }
            
            save.push_back(tmp);
        }
    }
    
    sort(save.begin(), save.end());
    
    for (int i = 0; i < save.size(); i++) {
        cout << save[i] << "\n";
    }
}
