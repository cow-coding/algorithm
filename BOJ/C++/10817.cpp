#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, max1, max2, result;
    cin >> num1 >> num2 >> num3;

    max1 = max(num1, num2);
    max2 = max(max1, num3);

    if (max2 == num1) {
        if (num2 >= num3) {
            result = num2;
        } else {
            result = num3;
        }
    } else if (max2 == num2){
        if (num1 >= num3) {
            result = num1;
        } else {
            result = num3;
        }
    } else if (max2 == num3){
        if (num1 >= num2) {
            result = num1;
        } else {
            result = num2;
        }
    }

    cout << result << endl;
}
