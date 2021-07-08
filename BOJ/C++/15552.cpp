#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int t{0}, a{0}, b{0};
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
    return 0;
}
