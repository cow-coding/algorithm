#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    vector<int> deck;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int n;
        
        cin >> n;
        deck.push_back(n);
    }
    
    sort(deck.begin(), deck.begin() + N);
    
    int upper, lower;
    
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        int n;
        
        cin >> n;
        
        cout << upper_bound(deck.begin(), deck.end(), n) - lower_bound(deck.begin(), deck.end(), n) << " ";
    }

}
