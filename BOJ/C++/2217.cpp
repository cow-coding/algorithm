#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<size_t> rope;
    int ropeNum;
    int weight;
    size_t result = 0;
    
    cin >> ropeNum;
    
    for (int i = 0; i < ropeNum; i++)
    {
        cin >> weight;
        rope.push_back(weight);
    }
    
    sort(rope.begin(), rope.end());
    
    for (int i = 0; i < ropeNum; i++)
    {
        size_t tmp = rope[i];
        
        for (int j = i + 1; j < ropeNum; j++)
            tmp += rope[i];
        
        result = max(tmp, result);
    }
    
    cout << result << endl;
}
