#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string input;
    string s;

    cin >> N;
    N--;

    cin >> input;
    string result = input;

    while (N--) {
        cin >> s;

        for (int i = 0; i < input.size(); i++) {
            if (s[i] != input[i]) {
                result[i] = '?';
            }
        }
    }

    cout << result << "\n";
}
