#include <iostream>
#include <string>
using namespace std;

const int MOD = 1234567891;
const int REM = 31;

int main() {
    int L;
    long long sum = 0;
    long long r = 1;
    string str;
    
    cin >> L >> str;
    
    for (int i = 0; i < str.size(); i++) {
        sum = (sum + (str[i] - 'a' + 1) * r) % MOD;
        
        r = (r * REM) % MOD;
    }
    
    cout << sum << "\n";
}
