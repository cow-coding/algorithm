#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, char> croatia;
    
    int time = 0;
    int start;
    int numQ;
    
    cin >> start >> numQ;
    
    while (numQ--) {
        cin >> croatia.first >> croatia.second;
        
        time += croatia.first; // 일단 문제에 들어가면 시간은 흘러감
        
        if (time >= 210)
            break;
        
        if (croatia.second == 'T') // 문제를 맞추면 다음사람으로 넘어간다.
            start++;
        
        if (start > 8)
            start %= 8;
    }
    
    cout << start << "\n";
}
