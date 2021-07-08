#include <iostream>
using namespace std;

int main()
{
    bool num[101] = {false};
    int arr[101];
    
    int N, K;
    int cnt{0};
    int tmp;
    
    bool ans = true;
    
    cin >> N >> K;
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    for (int i = 0; i < N; i++) {
        if (num[i]) continue;
        
        num[i] = true;
        tmp = arr[i];
        
        cnt++;
        
        for (int j = i + 1; j < N; j++) {
            if (num[j]) continue;
            
            if (tmp < arr[j]) {
                tmp = arr[j];
                num[j] = true;
            }
        }
        
        if (cnt > K) {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "YES\n";
    } else
        cout << "NO\n";
    
}
