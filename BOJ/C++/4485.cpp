#include <cstdio>
#include <queue>
#include <functional>
#include <utility>
#include <vector>
using namespace std;

const int INF = 100000000;
const int MAX = 126;

int map[MAX][MAX];
int dist[MAX][MAX];
int dirx[4] = {0, 1, -1, 0};
int diry[4] = {1, 0, 0, -1};
int N;

struct Node {
    int x, y, dist;
    
    Node(int tx, int ty, int di) : x(tx), y(ty), dist(di) { }
    
    bool operator > (const Node& n) const {
        return dist > n.dist;
    }
};

void dijkstra() {
    priority_queue<Node, vector<Node>, greater<Node>> PQ;
    
    dist[0][0] = map[0][0];
    PQ.push(Node(0, 0, 0));
    
    while (!PQ.empty()) {
        int currx = PQ.top().x;
        int curry = PQ.top().y;
        int cdist = PQ.top().dist;
        PQ.pop();
        
        if (currx == N - 1 && curry == N - 1) break;
        
        if (cdist > dist[currx][curry]) continue;
        
        for (int i = 0; i < 4; i++) {
            int nx = currx + dirx[i];
            int ny = curry + diry[i];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                if (dist[nx][ny] > dist[currx][curry] + map[nx][ny]) {
                    dist[nx][ny] = dist[currx][curry] + map[nx][ny];
                    PQ.push(Node(nx, ny, dist[nx][ny]));
                }
            }
        }
    }
}

int main()
{
    int ret{1};
    while (1) {
        
        
        scanf("%d", &N);
        
        if (N == 0) break;
        
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) {
                scanf("%1d", &map[i][j]);
                dist[i][j] = INF;
            }
        
        dijkstra();
        
        printf("Problem %d: %d\n", ret, dist[N - 1][N - 1]);
        ret++;
    }
}
