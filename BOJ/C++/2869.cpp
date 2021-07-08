#include <iostream>
using namespace std;

int main()
{
    int A, B, V;
    int day, result, _day;
    
    cin >> A >> B >> V;

    day = (V - A) % (A - B);
    
    _day = (V - A) / (A - B);
    if (day == 0) {
        result = _day + 1;
    } else
    {
        result = _day + 2;
    }
    cout << result;
    return 0;
}
