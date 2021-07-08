#include <iostream>
using namespace std;

int mem[100];

int fibo(int);

int main()
{
    int num;
    cin >> num;

    cout << fibo(num) << endl;
}

int fibo(int num)
{
    if (num <= 1)
        return num;

    if (mem[num] != 0)
        return mem[num];

    mem[num] = fibo(num - 1) + fibo(num - 2);
    return mem[num];
}
