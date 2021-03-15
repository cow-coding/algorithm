#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[110] = {0,};
    int tmp[110] = {0,};
    int M, N;
    
    cin >> N >> M;
    
    for (int i = 0 ; i < N; i++) {
        arr[i+1] = i + 1;
        tmp[i+1] = i + 1;
    }
    
    bool flag = false; // false -> arr input, true -> tmp input
    
    while (M--) {
        int s, e;
        
        cin >> s >> e;
        
        int i;
        int j;
        
        for (i = e, j = s; i >= s; i--, j++) {
            tmp[i] = arr[j];
        }
        
        for (int k = 1; k <= N; k++) {
            arr[k] = tmp[k];
        }
    }
    
    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n";
}
