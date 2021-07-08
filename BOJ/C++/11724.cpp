#include <iostream>
#include <vector>
using namespace std;

vector<int> Graph[1001];
bool visit[1001];

void DFS(int start)
{
    visit[start] = true;
    
    for (int next : Graph[start])
    {
        if (!visit[next])
            DFS(next);
    }
}

int main()
{
    int numNode, numEdge;
    int cycle{0};
    
    cin >> numNode >> numEdge;
    
    for (int i = 0; i < numEdge; i++) // 그래프 연결
    {
        int n1, n2;
        
        cin >> n1 >> n2;
        
        Graph[n1].push_back(n2);
        Graph[n2].push_back(n1);
    }
    
    for (int i = 1; i <= numNode ; i++)
    {
        if (!visit[i])
        {
            DFS(i); // DFS 1회 실행시 연결된 모든 노드는 true로 변환하므로 중복체크 안됨
            cycle++;
        }
    }
    
    cout << cycle << endl;
}
