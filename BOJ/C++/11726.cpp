#include <iostream>
using namespace std;

int mem[1010];

int answer(int);

int main()
{
    int num;
    
    cin >> num;
    
    cout << answer(num) << endl;
    
}

int answer(int num)
{
    if (mem[num] != 0)
        return mem[num] % 10007;
    
    if (num <= 3)
        mem[num] = num;
    else
        mem[num] = (answer(num - 1) + answer(num - 2)) % 10007;
    
    return mem[num] % 10007;
}
