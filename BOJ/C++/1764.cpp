#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    string tmp;
    vector<string> dud;
    vector<string> jap;
    
    cin >> n >> m;
    
    dud.resize(n);
    
    for (int i = 0; i < n; i++)
        cin >> dud[i];
    
    sort(dud.begin(), dud.end());
    
    for (int j = 0; j < m; j++) {
        cin >> tmp;
        
        if (binary_search(dud.begin(), dud.end(), tmp))
            jap.push_back(tmp);
    }
    
    sort(jap.begin(), jap.end());
    
    cout << jap.size() << "\n";
    
    for (int i = 0; i < jap.size(); i++)
        cout << jap[i] << "\n";
}
