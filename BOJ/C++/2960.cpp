#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int cnt{0};
    bool arr[1001] = {false, };
    
    cin >> N >> K;
    
    for (int i = 2; i <= N; i++)
    {
        for (int j = i; j <= N; j += i) {
            
            if (!arr[j]) {
                arr[j] = true;
                cnt++;
            }
            
            if (cnt == K) {
                cout << j << "\n";
                return 0;
            }
            
        }
    }
    
}
