#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int f, b;
    
    cin >> n >> m;
    
    cin >> f >> b;
    
    int result = f; // 초기 카드 단계
    
    for (int i = 0; i < m; i++)
    {
        int tmp;
        
        cin >> tmp;
        
        if (result <= tmp && result == f)
            result = b;
        else if (result <= tmp && result == b)
            result = f;
    }
    
    cout << result << "\n";
}
