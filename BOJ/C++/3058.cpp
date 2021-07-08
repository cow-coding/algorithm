#include <iostream>
using namespace std;

int main()
{
    int T, num, sum{0}, min{101}, count{0};
    cin >> T;
    
    for (int i = 1; i <= T; i++) {
        
        for (int j = 1; j <= 7; j++) {
            cin >> num;
            
            if (num % 2 == 0) {
                sum += num;
                count++;
                if (count == 1) {
                    min = num;
                } else if(min > num){
                    min = num;
                }
            }
        }
        cout << sum << " " << min << "\n";
        sum = 0;
        min = 101;
    }
}
