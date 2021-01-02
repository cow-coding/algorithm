#include <iostream>
#include <string>
using namespace std;

int L, C;
char str[15];
int check[15];
string ans = "";

void answer(int n) {
    
    check[n] = true;
    
    if (ans.size() == L) {
        cout << ans << "\n";
    } else {
        for (int i = 0; i < C; i++) {
            if (!check[i]) {
                ans += str[i];
                answer(i);
                ans[ans.size()] = '\0';
                check[i] = false;
            }
        }
    }
}

int main() {
    cin >> L >> C;
    
    for (int i = 0; i < C; i++) {
        char c;
        
        cin >> c;
        str[i] = c;
    }
    ans += str[0];
    
    answer(0);
}
