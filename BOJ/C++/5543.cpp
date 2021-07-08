#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int sang, jung, ha;
    int coke, cidar;
    int sum, tmp1, minb, mind;
    
    cin >> sang >> jung >> ha >> coke >> cidar;
    
    mind = min(coke, cidar);
    
    tmp1 = min(sang, jung);
    minb = min(tmp1, ha);
    
    sum = minb + mind - 50;
    
    cout << sum << endl;
}
