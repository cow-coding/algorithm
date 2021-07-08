#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;

int main() {
    vector<P> data;
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        data.push_back(P(x,y));
    }
    
    sort(data.begin(), data.begin() + N);
    
    for (int i = 0; i < data.size(); i++) {
        cout << data[i].first << " " << data[i].second << "\n";
    }
}
