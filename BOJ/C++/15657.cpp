#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ans;
vector<int> use;
vector<bool> chosen;

int N, M;

void func(int k)
{
    if (ans.size() == M) {
        for (int i = 0; i < M; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    } else {
        for (int i = k; i < N; i++) {
            ans.push_back(use[i]);
            func(i);
            ans.pop_back();
        }
    }
}

int main()
{
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        use.push_back(num);
    }
    
    sort(use.begin(), use.end());
    
    func(0);
}
