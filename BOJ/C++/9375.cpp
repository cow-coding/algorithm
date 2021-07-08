#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    
    
    int test, numClothes;
    
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        vector<pair<string, int>> option; // 의상 종류가 몇개인지 체크
        int result = 1;
        
        cin >> numClothes;
        
        for (int j = 0; j < numClothes; j++)
        {
            string name, kind;
    
            bool tmp = false;
            
            cin >> name >> kind;
            
            if (option.empty())
                option.push_back(make_pair(kind, 1));
            else
            {
                for (int i = 0; i < option.size(); i++)
                {
                    if (option[i].first == kind)
                    {
                        option[i].second++;
                        tmp = true;
                    }
                }
                
                if (tmp == false)
                    option.push_back(make_pair(kind, 1));
            }
        }
        
        for (int i = 0; i < option.size(); i++)
            result *= (option[i].second + 1);
        
        cout << result - 1 << "\n";
        
        option.clear();
    }
    
}
