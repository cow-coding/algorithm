#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> num;
    // 이거는 1927번 답, 내부 조건 제거하면 11279
    
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int command;
        
        cin >> command;
        
        if (command == 0) {
            if (num.empty())
                cout << "0\n";
            else {
                cout << num.top() << "\n";
                num.pop();
            }
        } else
            num.push(command);
    }
    
    return 0;
}
