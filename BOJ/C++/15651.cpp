#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> ans;

void func()
{
    if (ans.size() == M) {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    } else {
        for (int i = 1; i <= N; i++) {
            ans.push_back(i);
            func();
            ans.pop_back();
        }
    }
}

int main()
{
    cin >> N >> M;
    
    func();
    return 0;
}
