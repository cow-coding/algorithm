#include <iostream>
using namespace std;

int main()
{
    int scale[8], seq[7], acnt{0}, dcnt{0};
    
    for (int i = 0; i < 8; i++)
    {
        cin >> scale[i];
    }
    
    for (int i = 0; i < 7; i++)
    {
        seq[i] = scale[i] - scale[i + 1];
        
        if (seq[i] == 1)
            dcnt++;
        else if (seq[i] == -1)
            acnt++;
    }
    
    if (acnt == 7)
        cout << "ascending\n";
    else if (dcnt == 7)
        cout << "descending\n";
    else
        cout << "mixed\n";
    
    return 0;
}
