#include <iostream>
#include <string>
using namespace std;

int main() {
    string mbti;
    string result = "";
    
    cin >> mbti;
    
    for (int i = 0; i < mbti.size(); i++) {
        if (mbti[i] == 'E') result += 'I';
        else if(mbti[i] == 'I') result += 'E';
        
        if (mbti[i] == 'N') result += 'S';
        else if(mbti[i] == 'S') result += 'N';
        
        if (mbti[i] == 'F') result += 'T';
        else if(mbti[i] == 'T') result += 'F';
        
        if (mbti[i] == 'J') result += 'P';
        else if(mbti[i] == 'P') result += 'J';
    }
    
    cout << result << "\n";
}
