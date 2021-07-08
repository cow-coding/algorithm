#include <iostream>
#include <vector>
using namespace std;

int main() {
    int answer = 0;
    int road[1010];
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> road[i];
    }
    
    int start = 0, end = 0;
    bool flag = false;
    
    for (int i = 0; i < N - 1; i++) {
        if ((road[i + 1] > road[i]) && !flag) {
            start = i;
            flag = true;
        }else if (road[i + 1] <= road[i]) {
            end = i;
            flag = false;
            
            if (answer < road[end] - road[start]) {
                answer = road[end] - road[start];
            }
        }
        
        if (i == N - 2 && flag) {
            end = i + 1;
            flag = false;
            
            if (answer < road[end] - road[start]) {
                answer = road[end] - road[start];
            }
        }
    }
    
    cout << answer << "\n";
}
