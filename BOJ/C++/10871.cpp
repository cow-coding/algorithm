#include <iostream>
using namespace std;

int main()
{
    int N{0}, X{0}, num;
    cin >> N >> X;
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num < X) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
