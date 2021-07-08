#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> node[100001];
int result[100001];
bool visit[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int N;
    queue<int> q;
    
    cin >> N;
    
    for (int i = 0; i < N - 1; i++) {
        int s, e;
        
        cin >> s >> e;
        
        node[s].push_back(e);
        node[e].push_back(s);
    }
    
    q.push(1);
    visit[1] = true;
    
    while (!q.empty()) {
        int s = q.front();
        q.pop();
        
        for (int i = 0; i < node[s].size(); i++) {
            int e = node[s][i];
            
            if (!visit[e]) {
                q.push(e);
                visit[e] = true;
                result[e] = s;
            }
        }
    }
    
    for (int i = 2; i <= N; i++) {
        cout << result[i] << "\n";
    }
}
