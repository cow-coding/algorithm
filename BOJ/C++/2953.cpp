#include <iostream>
using namespace std;

int main()
{
    int chef[5][4];
    int sum[5] = {0};
    int tmp;
    int max;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> chef[i][j];
            sum[i] += chef[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            max = sum[i];
            tmp = i;
        }
        else if (max < sum[i])
        {
            max = sum[i];
            tmp = i;
        }
    }
    
    cout << tmp + 1 << " " << max;
}
