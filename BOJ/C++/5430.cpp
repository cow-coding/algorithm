#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

int main() {
    int T, n;
    
    cin >> T;
    
    while (T--) {
        deque<int> dq;
        string input;
        string s;
        string cmd;
        bool right = true; //  true : 정방향, false : 역방향
        bool pass = false;
        char start; // [
        char trash; // , or ]
        
        cin.ignore();
        
        cin >> cmd >> n;
        
        cin >> start;
        
        for (int i = 0; i < n; i++) {
            int num;
            
            cin >> num;
            dq.push_back(num);
            
            cin >> trash;
        }
        
        for (int i = 0; i < cmd.size(); i++) {
            if (cmd[i] == 'R') {
                if (right) {
                    right = false;
                }else {
                    right = true;
                }
            }else {
                if (dq.empty()) {
                    cout << "error\n";
                    pass = true;
                    break;
                }else {
                    if (right) {
                        dq.pop_front();
                    }else {
                        dq.pop_back();
                    }
                }
            }
        }
        
        if (!pass) {
            if (right) {
                cout << "[";
                
                while (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                    
                    if (!dq.empty()) cout << ",";
                }
                
                cout << "]\n";
            }else {
                cout << "[";
                
                while (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                    
                    if (!dq.empty()) cout << ",";
                }
                
                cout << "]\n";
            }
        }
    }
}
