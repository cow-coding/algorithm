#include <iostream>
using namespace std;

bool visit[9];
int M, N;
int ans[9];

void dfs(int n)
{
    if (n == M) {
        for (int i = 0; i < M; i++)
            cout << ans[i] + 1 << " ";
        cout << "\n";
    }
    
    for (int i = 0; i < N; i++) {
        if (!visit[i]) {
            visit[i] = true;
            ans[n] = i;
            
            dfs(n + 1);
            
            visit[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;
    
    dfs(0);
}

