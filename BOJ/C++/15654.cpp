#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> use;
vector<int> ans;
vector<bool> chosen;

void func()
{
    if (ans.size() == M) {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    } else {
        for (int i = 0; i < N; i++) {
            if (chosen[i]) continue;
            
            chosen[i] = true;
            ans.push_back(use[i]);
            func();
            chosen[i] = false;
            ans.pop_back();
        }
        
    }
}


int main()
{
    cin >> N >> M;
    
    chosen.resize(N);
    
    for (int i = 0; i < N; i++) {
        int num;
        
        cin >> num;
        
        use.push_back(num);
    }
    
    sort(use.begin(), use.end()); // 정렬 후에 숫자를 뽑아서 쓸 예정
    
    func();
    
    return 0;
}
