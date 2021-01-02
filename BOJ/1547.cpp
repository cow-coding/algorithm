#include <iostream>
using namespace std;

int main()
{
    int num;
    int a, b;
    bool ball[4] = {0, 1, 0, 0};
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        bool tmp;
        cin >> a >> b;
        
        tmp = ball[a];
        ball[a] = ball[b];
        ball[b] = tmp;
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (ball[i] == 1)
        {
            cout << i << "\n";
            break;
        }
    }
    
    return 0;
}
