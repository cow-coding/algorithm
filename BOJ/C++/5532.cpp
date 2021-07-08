#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int L, A, B, C, D;
    int kday, mday;
    int daymax;
    
    cin >> L >> A >> B >> C >> D;
    
    if (A % C != 0)
        kday = A / C + 1;
    else
        kday = A / C;
    
    if (B % D != 0)
        mday = B / D + 1;
    else
        mday = B / D;
    
    
    daymax = max(kday, mday);
    
    cout << L - daymax << endl;
}
