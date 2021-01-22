#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int N, del;
int result;
int root;
vector<int> tree[51];
bool visit[51];

void BFS(int start) {
    visit[start] = true;
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        int child = 0;
        for(int i = 0; i < tree[node].size(); i++) {
            int next = tree[node][i];
            
            if (!visit[next]) {
                child++;
                visit[next] = true;
                q.push(next);
            }
        }
        
        if (child == 0) result++;
    }
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int parent;
        
        cin >> parent;
        
        if (parent != -1) {
            tree[parent].push_back(i);
            tree[i].push_back(parent);
        }else {
            root = i;
        }
    }
    
    cin >> del;
    
    visit[del] = true;
    
    if (del != root) BFS(root);
    
    cout << result << "\n";
}
