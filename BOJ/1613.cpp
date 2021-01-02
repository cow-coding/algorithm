#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

/*
 <아이디어>
 방향그래프로 설정한다. 어차피 시간역행은 발생하지 않음
 a b로 주어질 경우
 dist[a][b]와 dist[b][a]를 비교한다.
 
 앞이 나타내는 것은 a사건이 일어나고 b사건이 일어났다는 것이다.
 
 앞이 INF가 아닌데 뒤가 INF면 a -> b
 그 반대면 b -> a
*/

const int INF = 100000000;

int main()
{
    int dist[401][401];
    int n, k;
    
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < 401; i++)
        for (int j = 0; j < 401; j++)
            dist[i][j] = i == j ? 0 : INF;
    
    for (int i = 0; i < k; i++) {
        int s, e;
        
        scanf("%d %d", &s, &e);
        dist[s - 1][e - 1] = min(dist[s - 1][e - 1], 1);
    }
    
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] == INF || dist[k][j] == INF) continue;
                
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    
    int a, b;
    int test;
    
    scanf("%d", &test);
    
    while (test--) {
        scanf("%d %d", &a, &b);
        
        if (dist[a - 1][b - 1] >= INF && dist[b - 1][a - 1] < INF)
            printf("1\n");
        else if (dist[a - 1][b - 1] < INF && dist[b - 1][a - 1] >= INF)
            printf("-1\n");
        else
            printf("0\n");
    }
}
