#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

set<string> member;
bool desc(string a, string b) {
    return a > b;
}

int main() {
    int N;
    vector<string> result;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string name, status;
        
        cin >> name >> status;
        
        if (status == "enter") {
            if (member.find(name) == member.end()) {
                // 해당 직원이 없는 경우
                member.insert(name);
            }else continue;
        }else if (status == "leave") {
            if (member.find(name) != member.end()) {
                // 해당 직원이 없는 경우
                member.erase(name);
            }else continue;
        }
    }
    
    set<string>::iterator iter;
    for (iter = member.begin(); iter != member.end(); iter++) {
        result.push_back(*iter);
    }
    
    sort(result.begin(), result.end(), desc);
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
}
