#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string bin1;
    string bin2;
    vector<int> ans1;
    vector<int> ans2;
    vector<int> ans3;
    vector<int> ans4;
    vector<int> ans5;
    
    cin >> bin1 >> bin2;
    
    for (int i = 0; i < bin1.size(); i++) {
        bool b1 = bin1[i] - '0';
        bool b2 = bin2[i] - '0';
        
        ans1.push_back(b1 & b2);
        ans2.push_back(b1 | b2);
        ans3.push_back(b1 ^ b2);
        ans4.push_back(!b1);
        ans5.push_back(!b2);
    }
    
    for (int i = 0; i < ans1.size(); i++) {
        cout << ans1[i];
    }
    
    cout << "\n";
    
    for (int i = 0; i < ans2.size(); i++) {
        cout << ans2[i];
    }
    
    cout << "\n";
    
    for (int i = 0; i < ans3.size(); i++) {
        cout << ans3[i];
    }
    
    cout << "\n";
    
    for (int i = 0; i < ans4.size(); i++) {
        cout << ans4[i];
    }
    
    cout << "\n";
    
    for (int i = 0; i < ans5.size(); i++) {
        cout << ans5[i];
    }
    
    cout << "\n";
}

