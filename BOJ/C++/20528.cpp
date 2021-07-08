#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    bool arr[26] = {false,};
    int n;
    vector<char> ans;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s;
        
        cin >> s;
        
        if (!arr[s[0] - 'a']) {
            arr[s[0] - 'a'] = true;
            ans.push_back(s[0]);
        }
    }
    
    if (ans.size() == 1) {
        cout << 1 << "\n";
    }else {
        cout << 0 << "\n";
    }
}
