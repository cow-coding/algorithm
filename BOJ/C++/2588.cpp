#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, mul;
    cin >> n1 >> n2;
    
    n3 = n2 % 10 * n1;
    n4 = (n2 % 100) / 10 * n1;
    n5 = n2 / 100 * n1;
    mul = n1 * n2;

    cout << n3 << "\n" << n4 << "\n" << n5 << "\n" << mul << "\n";
}
