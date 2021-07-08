#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test, drink[101], loop{1}, schoolN{1}, maxdrink;
    string name[101], max;
    
    cin >> test;
    
    while (loop <= test)
    {
        int cnt{1};
        cin >> schoolN;
        
        while (cnt <= schoolN)
        {
            cin >> name[cnt] >> drink[cnt];
            if (cnt == 1)
            {
                max = name[1];
                maxdrink = drink[1];
            }
            
            if (drink[cnt] > maxdrink)
            {
                max = name[cnt];
                maxdrink = drink[cnt];
            }
            cnt++;
        }
        cout << max << endl;
        
        loop++;
    }
    
    return 0;
}
