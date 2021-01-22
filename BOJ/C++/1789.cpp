#include <iostream>
using namespace std;

int main()
{
    long long int N;
    int num = 1;
    int cnt{0};
    long long int sum = 0;
    
    cin >> N;
    
    while (1) {
        sum += num;
        cnt++;
        
        if (sum > N) {
            cnt--;
            cout << cnt << "\n";
            break;
        }
        
        num++;
    }
    return 0;
}
