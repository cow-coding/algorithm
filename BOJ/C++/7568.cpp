#include <iostream>
using namespace std;

struct size {
    int weight = 0;
    int height = 0;
    int rank = 1;
};

int main()
{
    int test;
    size test1[50];
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
        cin >> test1[i].weight >> test1[i].height;
    
    
    for (int i = 0; i < test; i++)
    {
        int cnt{1};
        
        for (int j = 0; j < test; j++)
        {
            if (i == j)
                continue;
            
            if (test1[i].weight < test1[j].weight)
            {
                if (test1[i].height < test1[j].height)
                {
                    test1[i].rank = ++cnt;
                }
            }
        }
    }
    
    for (int i = 0; i < test; i++)
    {
        cout << test1[i].rank << " ";
    }
    
    return 0;
}
