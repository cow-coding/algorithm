#include <iostream>
using namespace std;

int main()
{
    int student[6], sum{0} ,avg{0};
    
    for (int i = 1; i <= 5; i++)
    {
        cin >> student[i];
        if (student[i] < 40)
        {
            student[i] = 40;
        }
        sum += student[i];
    }
    
    avg = sum / 5;
    cout << avg << endl;
}
