#include <iostream>
#include <queue>
using namespace std;

int main()
{
    bool arr[5001] = {false};
    queue<int> ans;
    int cnt = 1;
    int i = 1;
    int N, K;

    cin >> N >> K;

    while (1) {
        if (i > N)
            i = 1;

        if (ans.size() == N) {
            cout << "<";
            for (int i = 0; i < N; i++) {
                if (i != N - 1)
                    cout << ans.front() << ", ";
                else
                    cout << ans.front() << ">\n";
                ans.pop();
            }
            break;
        }

        if (!arr[i] && cnt == K) {
            arr[i] = true;
            ans.push(i);
            cnt = 1;
            i++;
        } else if (arr[i])
            i++;
        else {
            i++;
            cnt++;
        }
    }
}
