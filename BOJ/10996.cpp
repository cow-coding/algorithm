#include <iostream>
#include <cmath>
using namespace std;

void print(double n) {
    int up = ceil(n / 2);
    int down = n / 2;

    for (int i = 0; i < ceil(n/2); i++) {
        cout << "* ";
    }

    cout << "\n";

    for (int i = 0; i < down; i++) {
        cout << " *";
    }
}


int main() {
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        print(N);
        cout << "\n";
    }

    return 0;
}
