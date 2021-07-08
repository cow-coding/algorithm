#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    cout << setprecision(2) << fixed;
    int cnt{0};
    double tcase, num;
    string calc;
    
    cin >> tcase;
    while (cnt < tcase)
    {
        cin >> num;
        getline(cin, calc);
        for (int i = 0; i < calc.size(); i++)
        {
            if (calc[i] == '@')
                num *= 3;
            else if (calc[i] == '%')
                num += 5;
            else if (calc[i] == '#')
                num -= 7;
        }
        cout << num << "\n";
        cnt++;
    }
    return 0;
}
