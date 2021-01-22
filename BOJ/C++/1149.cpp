#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

const int INF = 100000000;
int dp[1001][4];
int cost[1000][3]; // 0-R, 1-G, 2-B
int N;

vector<int> change;

int RGB(int pos, int prev = 3)
{
    int& ret = dp[pos][prev];

    if (ret != -1) return ret;    // 메모지에이션 조건문
    if (pos == N) return ret = 0; // 가장 마지막 마을에 도착할 시 색칠 비용이 안들음

    ret = INF;

    for (int i = 0; i < 3; i++)
        if (prev != i) {
            int total = RGB(pos + 1, i) + cost[pos][i];
            change.push_back(total);
            ret = min(ret, total);
        }
    // 이전에 칠해진 색과 현재 칠하는 색이 다른경우 실행되는 코드
    // ret에 pos + 1번 마을에 i번색을 칠한 값 + pos번째 마을의 i번째 색을 칠하는 비용
    return ret;
}

int main()
{
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &cost[i][j]);

    memset(dp, -1, sizeof(dp));

    printf("%d\n", RGB(0));
}
