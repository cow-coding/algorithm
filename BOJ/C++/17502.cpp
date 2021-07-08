#include <iostream>
#include <string>
using namespace std;
/*
 < 아이디어 >
 ??ta?or
 
 i
 0 - ?
 1 - ?
 2 - t
 3 - a (N / 2)
 4 - ?
 5 - o
 6 - r
 */


int main()
{
    int N;
    string input;
    
    cin >> N;
    cin >> input;
    
    for (int i = 0; i < N / 2; i++) {
        if (input[i] == '?') {
            if (input[N - 1 - i] != '?')
                input[i] = input[N - 1 - i];
            else
                input[i] = input[N - 1 - i] = 'a';
        } else {
            if (input[N - 1 - i] == '?') {
                input[N - 1 - i] = input[i];
            }
        }
    }
    
    if (N % 2 == 1 && input[N / 2] == '?')
        input[N / 2] = 'a';
    
    cout << input << "\n";
}
