#include <iostream>
using namespace std;

void clock(int, int);

int main()
{
    int hour, min;
    
    cin >> hour >> min;
    
    clock(hour, min);
    
    return 0;
    
}

void clock(int hour, int min)
{
    if (min - 45 < 0)
    {
        hour--;
        if (hour < 0) {
            hour = 24 + hour;
        }
        min = 60 + min - 45;
    } else
    {
        min -= 45;
    }
    
    cout << hour << " " << min << "\n";
}
