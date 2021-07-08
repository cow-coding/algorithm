#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> ans;
stack<int> tmp;
int oper[4]; // + - * /
int arr[20];
int N;
bool pass = false;

void cal(int i, int result) {
    if (i == N) {
        ans.push_back(result);
        return;
    }
    
    int x = result;
    int y = arr[i];
    
    if (oper[0] != 0) {
        int z = x + y;
        oper[0]--;
        cal(i+1, z);
        
        oper[0]++;
    }
    
    if (oper[1] != 0) {
        int z = x - y;
        oper[1]--;
        cal(i+1, z);
        oper[1]++;
    }
    
    if (oper[2] != 0) {
        int z = x * y;
        oper[2]--;
        cal(i+1, z);
        oper[2]++;
    }
    
    if (oper[3] != 0) {
        int z = x / y;
        oper[3]--;
        cal(i+1, z);
        oper[3]++;
    }
}

int main() {
      
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int num;
        
        cin >> num;
        
        if (tmp.empty()) tmp.push(num);
        
        arr[i] = num;
    }
    
    for (int i = 0; i < 4; i++) {
        int o;
        
        cin >> o;
        
        oper[i] = o;
    }
    
    cal(1, arr[0]);
    
    sort(ans.begin(), ans.end());
    
    cout << ans[ans.size()-1] << "\n" << ans[0]  << "\n";
}
