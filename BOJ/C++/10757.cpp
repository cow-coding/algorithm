#include <iostream>
#include <string>
using namespace std;

int main() {
    int add[110000];
    
    string str1, str2;
    
    cin >> str1 >> str2;
    
    if (str1.size() > str2.size()) {
        while (str1.size() != str2.size()) {
            str2 = '0' + str2;
        }
    }else if (str1.size() < str2.size()){
        while (str1.size() != str2.size()) {
            str1 = '0' + str1;
        }
    }
    
    for (int i = str1.size() - 1; i > -1; i--) {
        add[i] = (str1[i] - '0') + (str2[i] - '0');
    }
    
    for (int i = str1.size() - 1; i > 0; i--) {
        if (add[i] >= 10) {
            add[i - 1] += add[i] / 10;
            add[i] %= 10;
        }
    }
    
    for (int i = 0; i < str1.size(); i++) {
        cout << add[i];
    }
    
    cout << "\n";
}
