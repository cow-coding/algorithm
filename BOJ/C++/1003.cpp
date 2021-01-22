#include <iostream>
using namespace std;

int mem[1000];

int fibo(int num)
{
    if (num == 0)
    {
        mem[0] = 0;
        return 0;
    } else if (num == 1)
    {
        mem[1] = 1;
        return 1;
    }

    if (mem[num] != 0)
        return mem[num];

    mem[num] = fibo(num - 1) + fibo(num - 2);
    return mem[num];;
}

int main()
{
    int test;
    int fibnum;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> fibnum;

        if (fibnum == 0)
            cout << 1 << " " << 0 << endl;
        else if (fibnum == 1)
            cout << 0 << " " << 1 << endl;
        else
            cout << fibo(fibnum - 1) << " " << fibo(fibnum) << endl;
    }
}
