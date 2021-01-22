#include <iostream>
using namespace std;

int calculate(int);

int main()
{
    int answer;
    
    cin >> answer;
    
    for (int i = 1; i <= 1000000; i++)
    {
        if (calculate(i) == answer)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "0\n";
    
    return 0;
}

int calculate(int num)
{
    int tmp{num}, remain, sum = num, cnt{0};
    
    while (tmp != 0)
    {
        if (cnt == 0)
        {
            remain = num;
            cnt++;
        }
        
        remain = tmp % 10;
        
        tmp = tmp / 10;
        
        sum += remain;
        
    }
    
    return sum;
}
