#include <iostream>
using namespace std;

int main()
{
    int num;
    int seed1{1}, seed2{0}, fibo;
    
    cin >> num;
    
    if (num == 0)
        cout << "0";
    else if (num == 1)
        cout << "1";
    else
    {
        for (int i = 2; i <= num; i++)
        {
            fibo = seed1 + seed2;
            seed2 = seed1;
            seed1 = fibo;
        }
    }
    
    cout << fibo << endl;
}
