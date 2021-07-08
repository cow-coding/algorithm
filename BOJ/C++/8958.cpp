#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test, loop{0}, cnt{0}, sum{0};
    string answer;
    
    cin >> test;
    
    while (test > loop)
    {
        cin >> answer;
        
        for (int i = 0; i < answer.size(); i++)
        {
            if (answer[i] == 'O')
            {
                cnt++;
                sum += cnt;
            } else if (answer[i] == 'X')
            {
                cnt = 0;
            }
        }
        cout << sum << endl;
        sum = 0;
        cnt = 0;
        
        loop++;
    }
    return 0;
}
