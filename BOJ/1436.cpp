#include <iostream>
using namespace std;

int main()
{
    int start = 666;
    int cnt = 1;
    int N;
    
    cin >> N;
    
    while (1) {
        if (cnt == N) break;
        
        start++;
        
        int copy = start;
        int six{0};
        
        while (copy) {
            int tmp = copy % 10;
            
            if (tmp == 6) {
                six++;
            } else if (six < 3)
                six = 0;
            
            copy /= 10;
        }
        
        if (six >= 3)
            cnt++;
    }
    
    cout << start << "\n";
}
