#include <iostream>
#include <vector>
#include <functional>
#include <utility>
using namespace std;

typedef pair<int, char> P; // (child, direct)
vector<P> tree[26];
int N;

void preorder(int root)
{
    cout << (char)(root + 'A');
    
    for (int i = 0; i < tree[root].size(); i++) {
        preorder(tree[root][i].first);
    }
}

void inorder(int root)
{
    if (tree[root].size() && tree[root][0].second == 'L')
        inorder(tree[root][0].first);
    
    cout << (char)(root + 'A');
    
    if (tree[root].size() && tree[root][0].second == 'R')
        inorder(tree[root][0].first);
    else if (tree[root].size() == 2)
        inorder(tree[root][1].first);
}

void postorder(int root)
{
    for (int i = 0; i < tree[root].size(); i++)
        postorder(tree[root][i].first);
    cout << (char)(root + 'A');
}

int main()
{
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        char parent, lc, rc;
        
        cin >> parent >> lc >> rc;
        
        if (lc != '.')
            tree[parent - 'A'].push_back(P(lc - 'A', 'L'));
        
        if (rc != '.')
            tree[parent - 'A'].push_back(P(rc - 'A', 'R'));
    }
    
    preorder(0);
    cout << "\n";
    inorder(0);
    cout << "\n";
    postorder(0);
    cout << "\n";
    
}
