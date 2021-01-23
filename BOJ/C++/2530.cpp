#include <iostream>
using namespace std;

void displaytimer(int hour, int min, int sec, int timer);

int main()
{
    int hour, min, sec;
    int timer;
    
    cin >> hour >> min >> sec;
    cin >> timer;
    
    displaytimer(hour, min, sec, timer);
    return 0;
}

void displaytimer(int hour, int min, int sec, int timer) // display and calculating time
{
    int Phour{0}, Pmin{0}, Psec;
    int Rhour, Rmin, Rsec;
    
    if (timer >= 60) //  if timer over the 60 >> resetting time
    {
        Phour = (timer / 60) / 60;
        Pmin = (timer / 60) % 60;
        Psec = timer % 60;
    } else
        Psec = timer;
    
    Rhour = hour + Phour;
    Rmin = min + Pmin;
    Rsec = sec + Psec;
    
    if (Rsec > 59)
    {
        Rmin += Rsec / 60;
        Rsec = Rsec % 60;
    }
    
    if (Rmin > 59)
    {
        Rhour += Rmin / 60;
        Rmin = Rmin % 60;
    }
    
    if (Rhour > 23)
        Rhour %= 24;
    
    cout << Rhour << " " << Rmin << " " << Rsec << "\n";
}
