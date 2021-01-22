#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> Node;
vector<bool> visit;

void DFS(int start)
{
    visit[start] = true;

    cout << start << " ";

    for (int next : Node[start])
    {
        if (!visit[next])
            DFS(next);
    }
}

void BFS(int start)
{
    queue<int> Q;

    Q.push(start);
    visit[start] = true;

    while (!Q.empty())
    {
        int curr = Q.front();
        Q.pop();

        cout << curr << " ";

        for (int next : Node[curr])
        {
            if (!visit[next]) {
                visit[next] = true;
                Q.push(next);
            }
        }
    }
}

int main()
{
    int numNode, numEdge, startN;

    cin >> numNode >> numEdge >> startN;

    Node.resize(numNode + 1);
    visit.resize(numNode + 1);

    for (int i = 0; i < numEdge; i++)
    {
        int n1, n2;

        cin >> n1 >> n2;

        Node[n1].push_back(n2);
        Node[n2].push_back(n1);
    }

    for (int i = 0; i <= numNode; i++)
        sort(Node[i].begin(), Node[i].end());

    DFS(startN);
    cout << endl;
    fill(visit.begin(), visit.end(), false);
    BFS(startN);
    cout << endl;
}
