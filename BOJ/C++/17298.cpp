#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int N;
    vector<int> num;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int n;
        
        cin >> n;
        
        num.push_back(n);
    }
    
    stack<int> s;
    vector<int> ans(num.size(), -1);
    
    for (int i = 0; i < num.size(); i++) {
        while (!s.empty() && num[s.top()] < num[i]) {
            ans[s.top()] = num[i];
            s.pop();
        }
        
        s.push(i);
    }
    
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    
    cout << "\n";
}
