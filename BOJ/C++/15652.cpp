#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;
int N, M;

void func(int k)
{
    if (ans.size() == M) {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    } else {
        for (int i = k; i <= N; i++) {
            ans.push_back(i);
            func(i);
            ans.pop_back();
        }
        
    }
}

int main()
{
    cin >> N >> M;
    
    func(1);
}
