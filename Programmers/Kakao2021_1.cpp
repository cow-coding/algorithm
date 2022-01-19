#include <string>
#include <vector>
#include <iostream>
using namespace std;

string reset(string input) {
    string ret = "";
    
    for(int i = 0; i < input.size(); i++) {
        if(input[i] != '\0') ret += input[i];
    }
    
    return ret;
}

string solution(string new_id) {
    string answer = "";
    char m[3] = {'-', '_', '.'};
    
    // step 1
    for(int i = 0; i < new_id.size(); i++) {
        new_id[i] = tolower(new_id[i]);
    }
    
    // step 2
    for(int i = 0; i < new_id.size(); i++) {
        bool flag = false;
        
        if(new_id[i] < 'a' || new_id[i] > 'z') {
            if(new_id[i]-'0' >= 0 && new_id[i]-'0' <= 9) continue;
            else {
                for(int j = 0; j < 3; j++) {
                    if(new_id[i] == m[j]) {
                        flag = true;
                        break;
                    }
                }
            
                if(!flag) {
                    new_id[i] = '\0';
                }
            }
        }
    }
    new_id = reset(new_id);
    
    char prev = new_id[0];
    
    // step 3
    for(int i = 1; i < new_id.size(); i++) {
        if(prev == '.' && new_id[i] == '.') {
            prev = new_id[i];
            new_id[i] = '\0';
        }else{
            prev = new_id[i];
        }
    }
    new_id = reset(new_id);
    
    // step 4
    if(new_id[0] == '.') new_id[0] = '\0';
    if(new_id[new_id.size() - 1] == '.') new_id[new_id.size() - 1] = '\0';
    new_id = reset(new_id);
    
    // step 5
    if(new_id.size() == 0) new_id += 'a';
    
    
    // step 6
    if(new_id.size() > 15) {
        for(int i = 15; i < new_id.size(); i++) {
            new_id[i] = '\0';
        }
    }
    new_id = reset(new_id);
    
    // step 4
    if(new_id[0] == '.') new_id[0] = '\0';
    if(new_id[new_id.size() - 1] == '.') new_id[new_id.size() - 1] = '\0';    
    new_id = reset(new_id);
    
    // step 7
    if(new_id.size() < 3) {
        while(new_id.size() != 3) {
            new_id += new_id[new_id.size() - 1];
        }
    }
    
    

    answer = new_id;
    
    return answer;
}