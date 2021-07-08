#include <iostream>
using namespace std;

int main() {
    int N, M;
    int arr[101];
    
    cin >> N >> M;
    
    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }
    
    for (int i = 0; i < M; i++) {
        int j, k;
        
        cin >> j >> k;
        
        int tmp = arr[j];
        arr[j] = arr[k];
        arr[k] = tmp;
    }
    
    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
    }
}
