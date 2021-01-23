#include <iostream>
using namespace std;

void displaytimer(int hour, int min, int timer);

int main()
{
    int hour, min;
    int timer;

    cin >> hour >> min;
    cin >> timer;
    
    displaytimer(hour, min, timer);
    return 0;
}

void displaytimer(int hour, int min, int timer) // display and calculating time
{
    int Phour{0}, Pmin;
    int Rhour, Rmin;
    
    if (timer >= 60)
    {
        Phour = timer / 60;
        Pmin = timer % 60;
    } else
        Pmin = timer;
    
    Rhour = hour + Phour;
    Rmin = min + Pmin;
    
    if (Rmin > 59)
    {
        Rhour += Rmin / 60;
        Rmin = Rmin % 60;
    }
    
    if (Rhour > 23)
        Rhour %= 24;
    
    cout << Rhour << " " << Rmin << "\n";
}
