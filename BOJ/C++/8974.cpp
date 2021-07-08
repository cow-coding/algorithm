#include <iostream>
using namespace std;

int main()
{
    int start, end, sum{0}, cnt{0};
    
    cin >> start >> end;
    
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cnt++;
            if (cnt > end)
                break;
            
            if (cnt >= start && cnt <= end)
                sum += i;
        }
    }
    
    cout << sum << endl;
}
