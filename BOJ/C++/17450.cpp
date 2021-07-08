#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;

int main() {
    double price, weight;
    vector<P> snack;
    double arr[3];
    double max = 0;
    int ans;
    
    for (int i = 0; i < 3; i++) {
        cin >> price >> weight;
        
        snack.push_back(P(price, weight));
    }
    
    for (int i = 0; i < 3; i++) {
        double total_weight = 10 * snack[i].second;
        double total_price = 10 * snack[i].first;
        
        if (total_price >= 5000) total_price -= 500;
        
        double util = total_weight / total_price;
        
        arr[i] = util;
    }
    
    for (int i = 0; i < 3; i++) {
        if (arr[i] > max) {
            max = arr[i];
            ans = i;
        }
    }
    
    if (ans == 0) cout << "S\n";
    else if (ans == 1) cout << "N\n";
    else cout << "U\n";
}
