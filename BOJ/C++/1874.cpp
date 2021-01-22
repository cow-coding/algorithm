#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    vector<char> result;
    int sequence;
    int maximum = 0;
    int num;
    
    cin >> sequence;
    
    while (sequence--) {
        cin >> num;
        
        if (maximum < num) {
            for (int i = maximum + 1; i <= num; i++) {
                s.push(i);
                result.push_back('+');
            }
            
            maximum = num;
            
        }else {
            if (s.top() != num) {
                cout << "NO\n";
                return 0;
            }
        }
        
        s.pop();
        result.push_back('-');
    }
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}
