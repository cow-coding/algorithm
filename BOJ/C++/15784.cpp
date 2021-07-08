#include <iostream>
using namespace std;

int main()
{
    int sit[1001][1001] = {0,};
    int hang, yeol;
    int num, cnt{0};
    
    cin >> num >> hang >> yeol;
    
    for (int i = 0; i < num; i++) // 매력지수 입력
    {
        for (int j = 0; j < num; j++)
        {
            cin >> sit[i][j];
        }
    }
    
    for (int i = 0; i < num; i++) // 동일 열 체크
    {
        if (sit[hang - 1][yeol - 1] < sit[i][yeol - 1])
        {
            cnt++;
            break;
        }
    }
    
    for (int i = 0; i < num; i++) // 동일 행 체크
    {
        if (sit[hang - 1][yeol - 1] < sit[hang - 1][i])
        {
            cnt++;
            break;
        }
    }
    
    if (cnt == 0)
        cout << "HAPPY\n";
    else
        cout << "ANGRY\n";
    
    return 0;
}
