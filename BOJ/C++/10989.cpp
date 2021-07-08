#include <iostream>
using namespace std;

int main() {
    // counting sort
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int num[10001] = {0, };
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int n;
        
        cin >> n;
        
        num[n]++;
    }
    
    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < num[i]; j++) {
            cout << i << "\n";
        }
    }
}
