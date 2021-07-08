#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string fnum;
    string snum;
    char calc;
    
    cin >> fnum >> calc >> snum;
    
    if (calc == '*')
    {
        for (int i = 0; i < (fnum.size() + snum.size()) - 1; i++)
        {
            if (i == 0)
                cout << 1;
            else
                cout << 0;
        }
    } else if (calc == '+')
    {
        if (fnum.size() == snum.size())
        {
            for (int i = 0; i < fnum.size(); i++)
            {
                if (i == 0)
                    cout << 2;
                else
                    cout << 0;
            }
        } else
        {
            unsigned int smax = max(fnum.size(), snum.size());
            unsigned int smin = min(fnum.size(), snum.size());
            
            for (int i = 0; i < smax; i++)
            {
                if (i == 0)
                    cout << 1;
                else if (i == smax - smin)
                    cout << 1;
                else
                    cout << 0;
            }
        }
    }
}
