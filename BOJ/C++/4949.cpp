#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string input;
    
    while (1) {
        getline(cin, input);

        if (input == ".") break;

        stack <char> s;
        int flag = 0;

        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '(' || input[i] == '[') s.push(input[i]);
            else if (input[i] == ')') {
                if (!s.empty() && s.top() == '(') s.pop();
                else {
                    cout << "no\n"; flag = 1; break;
                }
            }else if (input[i] == ']') {
                if (!s.empty() && s.top() == '[') s.pop();
                else {
                    cout << "no\n"; flag = 1; break;
                }
            }
        }

        if (flag) continue;

        if (!s.empty()) cout << "no\n";
        else cout << "yes\n";
    }
}
