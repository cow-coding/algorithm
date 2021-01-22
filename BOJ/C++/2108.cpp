#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int N;
    vector<int> num;
    int position[8001] = {0,}; // -4000 0 4000 -> position[5000] = 0임
    /*
     0   1  2  3  4
     -2  -1 0  1  2
     */
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int n;
        
        cin >> n;
        
        num.push_back(n);
    }
    
    sort(num.begin(), num.begin() + N);
    
    double avg = 0;
    int median = num[N/2];
    vector<int> mode;
    int range = num[N-1] - num[0];
    int maxmode = -1;
    
    for (int i = 0; i < num.size(); i++) {
        avg += num[i];
        position[4000 + num[i]]++;
        
        if (position[4000 + num[i]] > maxmode) {
            maxmode = position[4000 + num[i]];
        }
    }
    
    for (int i = 0; i < 8001; i++) {
        if (position[i] == maxmode) {
            mode.push_back(i-4000);
        }
        
        if (mode.size() == 2) {
            break;
        }
    }
    
    cout << round(avg / N) << "\n";
    cout << median << "\n";
    
    if (mode.size() == 2) cout << mode[1];
    else cout << mode[0];
    
    cout << "\n" << range << "\n";
    
}
