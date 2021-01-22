#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int start, end;
    int sum{0}, min{0};
    
    cin >> start >> end;
    
    for (int i = start; i < end + 1; i++)
    {
        double tmp = sqrt(i) - static_cast<int>(sqrt(i));
        
        if (tmp == 0 && sum == 0)
        {
            min = i;
            sum += i;
        } else if (tmp == 0)
            sum += i;
    }
    
    if (sum == 0)
        cout << -1 << endl;
    else
        cout << sum << endl << min << endl;
}
