#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;
    int N;
    int num;
    int curr = 1;
    
    cin >> N;
    
    while (N--) {
        cin >> num;
        
        if (curr == num) {
            curr++;
        }else {
            if (stk.empty()) {
                stk.push(num);
            }else {
                while (!stk.empty()) {
                    if (curr == stk.top()) {
                        stk.pop();
                        curr++;
                    }else break;
                }
                
                stk.push(num);
            }
        }
    }
    
    if (!stk.empty()) {
        while (!stk.empty()) {
            if (curr == stk.top()) {
                stk.pop();
                curr++;
            }else {
                cout << "Sad\n";
                return 0;
            }
        }
    }
    
    cout << "Nice\n";
    return 0;
}
