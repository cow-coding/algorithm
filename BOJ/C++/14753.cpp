#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    int ret1 = v[0] * v[1] * v[2];
    int ret2 = v[0] * v[1];
    int ret3 = v[0] * v[1] * v[n - 1];
    int ret4 = v[n - 1] * v[n - 2] * v[n - 3];
    int ret5 = v[n - 1] * v[n - 2];
    int ret6 = v[0] * v[n - 1] * v[n - 2];
    int ret7 = v[0] * v[n - 1];
    
    int tmp1 = max(ret1, ret2);
    int tmp2 = max(tmp1, ret3);
    int tmp3 = max(tmp2, ret4);
    int tmp4 = max(tmp3, ret5);
    int tmp5 = max(tmp4, ret6);
    int ans = max(tmp5, ret7);
    
    cout << ans << "\n";
}
