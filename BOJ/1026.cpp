#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arrA[110];
    int arrB[110];

    int test, sum{0};

    cin >> test;

    for (int i = 0; i < test; i++)
        cin >> arrA[i];

    for (int i = 0; i < test; i++)
        cin >> arrB[i];

    sort(arrA, arrA + test, greater<int>());
    sort(arrB, arrB + test, less<int>());

    for (int i = 0; i < test; i++)
        sum += arrA[i] * arrB[i];

    cout << sum << endl;
}
