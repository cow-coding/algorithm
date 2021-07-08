// 각주 달면 15656번, 각주없애면 15655번


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> use;
vector<int> ans;
vector<bool> chosen;

int N, M;

void func(int k)
{
    if (ans.size() == M) {
        for (int i = 0; i < M; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    } else {
        for (int i = 0; i < N; i++) {
//            if (chosen[i]) continue;

//            chosen[i] = true;
            ans.push_back(use[i]);
            func(i);
//            chosen[i] = false;
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

    sort(use.begin(), use.end());

    func(0);
}
