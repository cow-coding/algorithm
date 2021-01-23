#include <iostream>
using namespace std;

int main()
{
    bool map[101][101] = {false, };
    
    int x1, x2, y1, y2;
    int cnt = 0;
    
    for (int i = 0; i < 4; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        
        for (int i = x1; i < x2; i++) {
            for (int j = y1; j < y2; j++) {
                if (!map[i][j])
                    map[i][j] = true;
            }
        }
    }
    
    for (int i = 0; i < 101; i++)
        for (int j = 0; j < 101; j++)
            if (map[i][j])
                cnt++;
    
    cout << cnt << "\n";
}
