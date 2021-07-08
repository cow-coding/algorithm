#include <iostream>
using namespace std;

int main()
{
    int time1, time2, time3, time4;
    int total;
    int hour, min;
    
    cin >> time1 >> time2 >> time3 >> time4;
    
    total = time1 + time2 + time3 + time4;
    
    hour = total / 60;
    min = total % 60;
    
    cout << hour << endl << min;
}
