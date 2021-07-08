#include <iostream>
#include <cmath>
using namespace std;

typedef long long int lli;

int main()
{
    lli N;
    lli k = 0;
    
    cin >> N;
    
    while (N >= k) {
        N /= 2;
        k++;
    }
    
    cout << k - 1 << "\n";
    
//    while (1) {
//        if (N >= ((k) * pow(2, k)) && N <= ((k + 1) * pow(2, k + 1)) - 1) {
//            cout << k << "\n";
//            break;
//        } else
//            k++;
//    }
}
