#include <iostream>
using namespace std;

int main()
{
    int earth, sun, moon, day{1}, result;
    
    cin >> earth >> sun >> moon;
    
    while (1)
    {
        if ((day - earth) % 15 == 0 && (day - sun) % 28 == 0 && (day - moon) % 19 == 0)
        {
            result = day;
            break;
        } else
            day++;
    }
    cout << result << "\n";
    
}
