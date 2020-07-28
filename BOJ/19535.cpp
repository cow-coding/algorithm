#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef pair<int, int> P;

int dp[300100];

vector<P> edge_save;
vector<vector<int>> graph;

int main() {
    int N;
    int d = 0, g = 0;

    cin >> N;

    graph.resize(N + 10);

    for (int i = 0; i < N - 1; i++) {
        int u, v;

        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);

        edge_save.push_back(P(u, v));
    }

    for (int i = 0; i < edge_save.size(); i++) {
        int x = edge_save[i].first;
        int y = edge_save[i].second;

        d += (graph[x].size() - 1) * (graph[y].size() - 1);
    }

    for (int i = 1; i < graph.size(); i++) {
        int adj = graph[i].size();

        if (adj >= 3) {
            g += (adj * (adj - 1) * (adj - 2)) / 6;
        }
    }

    if (d > 3 * g) {
        cout << "D\n";
    }else if (d < 3 * g) {
        cout << "G\n";
    }else {
        cout << "DUDUDUNGA\n";
    }
}
