#include <iostream>
using namespace std;

int mem[100];

int fac(int num)
{
    if (mem[num] != 0)
        return mem[num];
    
    if (num <= 0)
        mem[num] = 1;
    else
        mem[num] = num * fac(num - 1);
    
    return mem[num];
}

int main()
{
    int n, m;
    
    cin >> n >> m;
    
    int ret;
    
    ret = fac(n) / (fac(n - m) * fac(m));
    
    cout << ret << endl;
    
}
