#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF 1000000000

vector<vector<int>> Node;
vector<bool> visit;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int userNum, friendship;
    int dist[101][101];


    cin >> userNum >> friendship;

    for (int i = 1; i <= userNum; i++) // dist 초기화
    {
        for (int j = 1; j <= userNum; j++)
            dist[i][j] = INF;
    }

    for (int i = 0; i < friendship; i++) // 노드 설정
    {
        int n1, n2;
        cin >> n1 >> n2;

        dist[n1][n2] = min(dist[n1][n2], 1);
        dist[n2][n1] = min(dist[n2][n1], 1);
    }

    for (int k = 1; k <= userNum; k++)
    {
        for (int i = 1; i <= userNum; i++)
        {
            for (int j = 1; j <= userNum; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
    }

    int result = 1000000000;
    int pos;
    int sum[101] = {0, };

    for (int i = 1; i <= userNum; i++)
    {
        for (int j = 1; j <= userNum; j++)
        {
            if(dist[i][j] >= 1000000000)
                continue;
            else
                sum[i] += dist[i][j];
        }

        if (sum[i] < result)
        {
            result = sum[i];
            pos = i;
        } else if (sum[i] == result)
            pos = min(pos, i);
    }

    cout << pos << "\n";
}
