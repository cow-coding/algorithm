#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int w, n;
    bool weight[800000] = {false,};
    int parcel[5001] = {0,};
    
    cin >> w >> n;
    
    // parcel weight setting
    for (int i = 0; i < n; i++) {
        cin >> parcel[i];
    }
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < i; j++) {
            weight[parcel[i] + parcel[j]] = true;
        }
        
        for (int j = i + 2; j < n; j++) {
            int total = w - parcel[i + 1] - parcel[j];
            
            if(total < 0) break;
            
            if (weight[total]) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    
    cout << "NO\n";
    
}
