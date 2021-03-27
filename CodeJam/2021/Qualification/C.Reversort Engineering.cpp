#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main() {
    int TestCase;
    int T;
    
    cin >> T;
        
    for(TestCase = 1; TestCase <= T; TestCase++) {
        int N, C;
        string answer = "";
        vector<int> arr;
        vector<int> change;
        
        cin >> N >> C;
        
        for (int i = 0; i < N; i++) {
            arr.push_back(i + 1);
        }
        
        if (C < N - 1) {
            answer = "IMPOSSIBLE";
        }else if ( (N * (N + 1) / 2) - 1 < C ) {
            answer = "IMPOSSIBLE";
        }else {
            for (int i = 0; i < N - 1; i++) {
                change.push_back(1);
                C--;
            }
            
            int t = 1;
            
            for (int i = change.size() - 1; i > -1; i--) {
                if (C >= t) {
                    change[i] += t;
                    C -= t;
                }else {
                    change[i] += C;
                    C = 0;
                    break;
                }
                
                t++;
            }
            
            int idx = arr.size() - 2;
            
            for (int i = change.size() - 1; i > -1; i--, idx--) {
                int curr = change[i];
                
                reverse(arr.begin() + idx, arr.begin() + idx + curr);
            }
            
            
            for (int i = 0; i < arr.size(); i++) {
                answer += to_string(arr[i]);
                answer += ' ';
            }
        }
        
        cout << "Case #" << TestCase << ": " << answer << "\n";
    }

    return 0;
}
