#include <iostream>
using namespace std;

int main() {
    long long tree[1000000];
    int N, M;
    long long max = 0;
    
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        cin >> tree[i];
        if (max < tree[i]) max = tree[i];
    }
    
    long long left = 0, right = max;
    long long mid = 0;
    long long ret = 0;
    long long result = 0;
    
    while (left <= right) {
        ret = 0;
        mid = (left + right) / 2;
        
        for (int i = 0; i < N; i++) {
            if (tree[i] > mid) ret += tree[i] - mid;
    
        }
        
        if (ret >= M) {
            if (result < mid) result = mid;
            left = mid + 1;
        }else if (ret < M) {
            right = mid - 1;
        }
    }
    
    cout << result << "\n";
}
