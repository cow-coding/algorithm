#include <iostream>
#include <string.h>
using namespace std;

int arr[101][101];
int visit[101];
int num;

void dfs(int curr)
{
    for (int i = 0; i < num; i++)
    {
        if (arr[curr][i] && !visit[i]) {
            visit[i]++;
            dfs(i);
        }
    }
}

int main()
{
    cin >> num;
    
    for (int i = 0; i < num; i++)
        for (int j = 0; j < num; j++)
            cin >> arr[i][j];
    
    for (int i = 0; i < num; i++)
    {
        memset(visit, 0, sizeof(visit));
        dfs(i);
        
        for (int j = 0; j < num; j++)
        {
            if (visit[j])
                arr[i][j] = 1;
        }
    }
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
}
