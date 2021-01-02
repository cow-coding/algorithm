#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    while (1) {
        bool ans = true;
        
        cin >> input;
        
        if (input == "0") break;
        
        for (int i = 0; i < input.size() / 2; i++) {
            if (input[i] != input[input.size() - 1 - i]) {
                ans = false;
                break;
            }
        }
        
        if (ans) cout << "yes\n";
        else cout << "no\n";
    }
    
}
