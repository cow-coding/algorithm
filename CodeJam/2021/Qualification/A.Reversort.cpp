#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int TestCase;
    int T;
    
    cin >> T;
        
    for(TestCase = 1; TestCase <= T; TestCase++) {
        int answer = 0;
        int N;
        vector<int> arr;
        
        cin >> N;
        
        for (int i = 0; i < N; i++) {
            int num;
            
            cin >> num;
            arr.push_back(num);
        }
        
        for (int i = 0; i < arr.size() - 1; i++) {
            int min_idx = 0;
            // reversort
            for (int j = i; j < arr.size(); j++) {
                if (arr[j] == i + 1) {
                    min_idx = j;
                    break;
                }
            }
            
            reverse(arr.begin() + i, arr.begin() + min_idx + 1);
            
            int cost = min_idx - i + 1;
            
            answer += cost;
        }
            
        cout << "Case #" << TestCase << ": " << answer << "\n";
    }

    return 0;
}
