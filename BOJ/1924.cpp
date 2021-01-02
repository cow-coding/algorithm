#include <iostream>
using namespace std;

int main()
{
    int dayMonth[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int month, day, t_day{0};
    cin >> month >> day;
    
    for (int i = 1; i < month; i++) {
        t_day += dayMonth[i];
    }
    t_day += day;
    
    switch (t_day % 7) {
        case 0:
            cout << "SUN\n";
            break;
        
        case 1:
            cout << "MON\n";
            break;
            
        case 2:
            cout << "TUE\n";
            break;
            
        case 3:
            cout << "WED\n";
            break;
            
        case 4:
            cout << "THU\n";
            break;
        
        case 5:
            cout << "FRI\n";
            break;
            
        case 6:
            cout << "SAT\n";
            break;
    }
}
