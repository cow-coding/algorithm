#include <iostream>
using namespace std;

int main()
{
    int testcase, cnt{1}, a, b;
    cin >> testcase;
    
    while (cnt <= testcase)
    {
        cin >> a >> b;
        cout << "Case #" << cnt << ": " << a << " + " << b << " = " << a + b << "\n";
        cnt++;
    }
    return 0;
}

