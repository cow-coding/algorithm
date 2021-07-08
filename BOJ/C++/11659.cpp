#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    int sum[100001] = {0, };
    
    cin >> N >> M;
    
    for (int i = 1; i <= N; i++) {
        if (i == 1)
            cin >> sum[i];
        else {
            int n;
            
            cin >> n;
            
            sum[i] = sum[i - 1] + n;
        }
    }
    
    for (int i = 0; i < M; i++) {
        int s, e;
        
        cin >> s >> e;
        
        cout << sum[e] - sum[s - 1] << "\n";
    }
}

