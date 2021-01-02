#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int alphabet1[26] = {0,};
    int alphabet2[26] = {0,};
    string i1, i2;
    int cnt = 0;
    
    cin >> i1 >> i2;
    
    for (int i = 0; i < i1.size(); i++) {
        alphabet1[i1[i] - 'a']++;
    }
    
    for (int i = 0; i < i2.size(); i++) {
        alphabet2[i2[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (alphabet1[i] != alphabet2[i]) {
            cnt += abs(alphabet1[i] - alphabet2[i]);
        }
    }
    
    cout << cnt;
}
