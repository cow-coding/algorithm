#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    vector<int> a;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int n;
        
        cin >> n;
        
        a.push_back(n);
    }
    
    sort(a.begin(), a.end());
    
    cout << a[a.size() - 1] - a[0] << "\n";
    
}
