#include <iostream>
using namespace std;

int main()
{
    int N, T, C, P;
    int tmp = 1;
    int result;
    
    cin >> N >> T >> C >> P;
    
    int cnt = 0;
    
    cin.clear();
    
    for(int i = 0;;i++) {
        if (tmp + T > N) {
            result = cnt * P;
            break;
        } else {
            cnt += C;
            tmp += T;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}
