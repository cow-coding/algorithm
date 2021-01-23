#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "";
    cin >> N;

    for (int num = 1; num <= 9; num++)
    {
        cout << N << " * " << num << " = " << N * num << "\n";
    }
}
