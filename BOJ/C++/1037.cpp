#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> arr) {
    if (n == 1) return arr[0]*arr[0];
    
    return arr[0] * arr[arr.size()-1];
}

int main() {
    int n;
    vector<int> arr;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        arr.push_back(num);
    }
    
    sort(arr.begin(), arr.end());
    
    cout << solution(n, arr) << "\n";
}
