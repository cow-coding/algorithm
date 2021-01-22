#include <iostream>
using namespace std;

int main()
{
    int test;
    int num;
    int result{0};
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        int cnt = 0;
        cin >> num;
        
        if (num == 1)
        {
            cnt++;
            result += cnt;
        } else
        {
            for (int j = 0; j < num; j++)
            {
                if (j == 0)
                    continue;
                else if ((j != 1 && num % j == 0)) // 소수가 아닌 경우
                {
                    cnt++;
                    result += cnt;
                    break;
                }
            }
        }
    }
    
    cout << test - result << endl;
}
