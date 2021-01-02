#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    
    cout << setprecision(20) << fixed << num1 / num2 << endl;
}
