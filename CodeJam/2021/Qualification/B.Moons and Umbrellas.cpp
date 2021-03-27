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
        int answer = 0;
        int x, y;
        int prev = 'I';
        
        string sentence;
        
        cin >> x >> y >> sentence;
        
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == 'C') {
                if (prev == 'J') {
                    answer += y;
                }
                
                prev = 'C';
            }else if (sentence[i] == 'J') {
                if (prev == 'C') {
                    answer += x;
                }
                
                prev = 'J';
            }
        }
            
        cout << "Case #" << TestCase << ": " << answer << "\n";
    }

    return 0;
}
