#include <iostream>
using namespace std;

int mem[100];
int calc(int);

int main()
{
    int test;
    int num;
    
    cin >> test;
    
    while (test--)
    {
        cin >> num;
        
        cout << calc(num) << endl;;
    }
}

int calc (int num)
{
    if (num <= 2)
        return num;
    else if (num == 3)
        return 4;
    
    if (mem[num] != 0)
        return mem[num];
    
    mem[num] = calc(num - 3) + calc(num - 2) + calc(num - 1);
    return mem[num];
}
