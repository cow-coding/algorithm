#include <iostream>
#include <algorithm>
using namespace std;

struct nation {
    int nation;
    int gold{0}, silver{0}, bronze{0};
    int rank{1};
};

int main()
{
    nation info[1001];
    
    int numNation;
    int nationName;
    int check;
    
    cin >> numNation >> check;
    
    // 국가 메달 정보 입력
    for (int i = 1; i <= numNation; i++)
        cin >> info[i].nation >> info[i].gold >> info[i].silver >> info[i].bronze;
    
    for (int i = 1; i <= numNation; i++)
        if (info[i].nation == check)
        {
            nationName = i;
            break;
        }
    
    for (int i = 1; i <= numNation; i++)
    {
            if (info[nationName].gold < info[i].gold)
                info[nationName].rank++;
            else if (info[nationName].gold == info[i].gold)
            {
                if (info[nationName].silver < info[i].silver)
                    info[nationName].rank++;
                else if (info[nationName].silver == info[i].silver)
                {
                    if (info[nationName].bronze < info[i].bronze)
                        info[nationName].rank++;
                }
            }
    }
    
    cout << info[nationName].rank << endl;
}
