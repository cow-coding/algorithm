#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    vector<int> arr;
    vector<int> ret;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int n;
        
        cin >> n;
        
        arr.push_back(n);
    }
    
    ret = arr;
    
    sort(arr.begin(), arr.end());
    
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    
    for (auto elem : ret) {
        int pos = lower_bound(arr.begin(), arr.end(), elem) - arr.begin();
        
        cout << pos << " ";
    }
    
    cout << "\n";
}
