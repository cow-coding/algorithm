#include <iostream>
#include <algorithm>
using namespace std;

#define INF 1000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int NumCom, edge;
    int computer[101][101] = {{0,0},};
    
    cin >> NumCom >> edge;
    
    // 컴퓨터간 거리 초기화
    for (int i = 1; i <= NumCom; i++) {
        for (int j = 1; j <= NumCom; j++)
            computer[i][j] = INF;
    }
    
    // 컴퓨터 노드 연결
    for (int i = 0; i < edge; i++) {
        int c1, c2;
        
        cin >> c1 >> c2;
        
        computer[c1][c2] = min(computer[c1][c2], 1);
        computer[c2][c1] = min(computer[c2][c1], 1);
    }
    
    // 플로이드 - 와샬 알고리즘
    for (int k = 1; k <= NumCom; k++)
        for (int i = 1; i <= NumCom; i++)
            for (int j = 1; j <= NumCom; j++)
                computer[i][j] = min(computer[i][j], computer[i][k] + computer[k][j]);
    
    int cnt{0};
    
    for (int i = 2; i <= NumCom; i++) {
        if (computer[1][i] < INF && computer[1][i] >= 1)
            cnt++;
    }
    
    cout << cnt << "\n";
}
