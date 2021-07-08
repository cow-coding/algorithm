#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cal(int a, int b, char oper) {
    int result = a;
    
    switch (oper) {
        case '+': result += b; break;
            
        case '-': result -= b; break;
            
        case '*': result *= b; break;
    }
    
    return result;
}

int N;
int ans;
string number;

void dfs(int idx, int curr) {
    if (idx > N - 1) {
        ans = max(ans, curr);
        return;
    }
    
    char oper = (idx == 0) ? '+' : number[idx - 1];
    
    if (idx + 2 < N) {
        // barcket size is just 3
        int ret = cal(number[idx] - '0', number[idx + 2] - '0', number[idx + 1]);
        dfs(idx + 4, cal(curr, ret, oper));
    }
    
    dfs(idx + 2, cal(curr, number[idx] - '0', oper));
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N >> number;
    
    ans = -987654321;
    dfs(0, 0);
    
    cout << ans << "\n";
}
