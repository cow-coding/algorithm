#include <iostream>
#include <string>
#include <utility>
#include <map>
using namespace std;

typedef pair<int, string> P;

int main() {
    multimap<int, string> data;
    
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int age;
        string name;
        
        cin >> age >> name;
        
        data.insert(P(age, name));
    }
    
    multimap<int, string>::iterator iter;
    
    for (iter = data.begin(); iter != data.end(); iter++) {
        cout << iter->first << " " << iter->second << "\n";
    }
}
