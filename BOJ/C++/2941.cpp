#include <iostream>
#include <string>
using namespace std;

int main()
{
    string croatia;
    int cnt{0};
    
    cin >> croatia;
    
    for (int i = 0; i < croatia.size(); i++)
    {
        if (croatia[i] == '=' || croatia[i] == '-')
            continue; // c=, c-, s=, s- clear
        else if (croatia[i] == 'l' && croatia[i + 1] == 'j')
            continue; // lj clear
        else if (croatia[i] == 'n' && croatia[i + 1] == 'j')
            continue; // nj clear
        else if (croatia[i] == 'd' && croatia[i + 1] == 'z' && croatia[i + 2] == '=')
            continue; // dz= clear
        
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
