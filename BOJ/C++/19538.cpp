#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

queue<int> Q;
vector<vector<int>> map;    // 연결
vector<int> person;          // 시간
vector<int> adj;             // 인접 노드 개수
bool visit[200100];          // 방문
vector<int> trust_person;    // 자기 주변 믿는 사람 수
int N, M;

void BFS() {
    visit[Q.front()] = true;
    int cnt = 0;

    while (!Q.empty()) {
        int qsize = Q.size();

        for (int i = 0; i < qsize; i++) {
            int curr = Q.front();
            person[curr] = cnt;
            visit[curr] = true;
            Q.pop();

            for (int i = 0; i < map[curr].size(); i++) {
                int child = map[curr][i];

                if (visit[child]) continue;

                // 현재 노드의 자식을 모두 확인해야함
                trust_person[child]++;
                // curr은 믿는 사람이므로 해당 자식의 주변에 믿는 사람카운트 올려야함
                if (trust_person[child] >= ceil(double(adj[child])/2)) {
                    // 주변에 믿는 사람이 인접노드의 절반이상이면 믿음
                    Q.push(child);
                    visit[child] = true;
                }
            }
        }

        cnt++;
    }
}

int main() {

    cin >> N;
    map.resize(N + 100);
    person.resize(N + 100);
    adj.resize(N + 100);
    trust_person.resize(N + 100);


    for (int i = 1; i <= N; i++) {
        person[i] = -1;

        while (1) {
            int n;

            cin >> n;

            if (n == 0) break;

            map[i].push_back(n);
            adj[i]++;
        }
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        int n;

        cin >> n;
        Q.push(n);
        visit[n] = true;
    }

    BFS();

    for (int i = 1; i <= N; i++) {
        cout << person[i] << " ";
    }
    cout << "\n";
}
