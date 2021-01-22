#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    long long answer = 0;
    int len = 1; // 1~8자리
    bool end = false;
    long long prev = 1, next = 10;
    
    cin >> num;
    
    while (1) {
        for (long long i = prev; i < next; i++) {
            if (i > num) {
                end = true;
                break;
            }
            answer += len;
        }
        
        if (end) break;
        
        prev *= 10;
        next *= 10;
        len++;
    }
    
    cout << answer;
}
