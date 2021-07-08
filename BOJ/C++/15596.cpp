#include <iostream>
#include <vector>
using namespace std;

long long summage(vector<int> &a)
{
    long long n{0};
    
    for (int i = 0; i < a.size(); i++)
        n += a[i];
    
    return n;
}

int main()
{
    
}
