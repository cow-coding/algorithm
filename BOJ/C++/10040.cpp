#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>> info; // first는 비용, second는 득표수
    
    int numRace, numJudge;
    
    cin >> numRace >> numJudge;
    
    for (int i = 0; i < numRace; i++)
    {
        int cost;
        
        cin >> cost;
        
        info.push_back(make_pair(cost, 0));
    }
    
    for (int i = 0; i < numJudge; i++)
    {
        int base;
        
        cin >> base;
        
        for (int j = 0; j < numRace; j++)
        {
            if (info[j].first <= base)
            {
                info[j].second++;
                break;
            }
        }
    }
    
    int maxi = 0;
    int cmaxi = 0;
    
    for (int i = 0; i < info.size(); i++)
    {
        if (maxi < info[i].second)
        {
            cmaxi = i;
            maxi = info[i].second;
        }
    }
    
    cout << cmaxi + 1 << "\n";
}
