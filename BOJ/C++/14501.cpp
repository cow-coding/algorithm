#include <iostream>
#include <algorithm>
using namespace std;

struct meeting
{
    int duration;
    int cost;
};

meeting meet[16];
int N;
int result;

void dfs(int n, int sum)
{
    if (n == N + 1) {
        result = max(result, sum);
        return;
    }

    if (n + meet[n].duration <= N + 1) // 만약 날짜 조건에 맞으면 dfs에 합이 된 비용을 넣어준다.
        dfs(n + meet[n].duration, sum + meet[n].cost);
    
    if (n + 1 <= N + 1) // 위의 코드 조건을 모두 체크하면 다음날짜로 넘어간다. + 종결조건
        dfs(n + 1, sum);
}

int main()
{
    cin >> N;
    
    for (int i = 1; i <= N; i++)
        cin >> meet[i].duration >> meet[i].cost;
    
    dfs(1, 0);
    
    cout << result << "\n";
}
