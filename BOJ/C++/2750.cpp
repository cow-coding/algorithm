#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // -1 0 1
    vector<int> num;
    
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int n;
        
        cin >> n;
        
        num.push_back(n);
    }
    
    sort(num.begin(), num.end());
    
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << "\n";
    }
}
