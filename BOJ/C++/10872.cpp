#include <iostream>
using namespace std;

int fac(int n);

int main()
{
    int n;
    cin >> n;
    cout << fac(n) << endl;
    return 0;
}

int fac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fac(n - 1);
}
