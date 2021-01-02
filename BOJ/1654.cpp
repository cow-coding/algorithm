#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
    return a > b;
}

int main() {
    int N, K;
    vector<int> line;
    
    cin >> K >> N;
    
    for (int i = 0; i < K; i++) {
        int len;
        cin >> len;
        
        line.push_back(len);
    }
    
    sort(line.begin(), line.begin() + K);
    
    int cnt = 0;
    int div = 1;
    long long high = line[K-1];
    long long low = 1;
    long long result = 0;
    
    while (low <= high) {
        cnt = 0;
        
        long long mid = (high+low)/2;
        
        for (int i = 0; i < line.size(); i++) {
            cnt += line[i] / mid;
        }
        
        if (cnt < N) {
            high = mid - 1;
        }else if (cnt >= N) {
            if (result < mid) {
                result = mid;
            }
            
            low = mid + 1;
        }
    }
    
    cout << result << "\n";
}
