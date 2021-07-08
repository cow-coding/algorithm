#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string phrase;
    stack<string> s;
    
    
    while (1) {
        bool flag = true;
        int k = 0; // string index
        getline(cin, phrase);
        
        
        if (s.size() != 0) {
            int l = s.size();
            
            for (int i = 0; i < l; i++) {
                s.pop();
            }
        }
        
        if (phrase[0] == '#') break;
            
        while (1) {
            
            
            if (k == phrase.size() && s.size() == 0) {
                cout << "legal\n";
                break;
            } else if (k == phrase.size() && s.size() != 0) {
                cout << "illegal\n";
                break;
            }
            
            if (phrase[k] == '<') {
                if (phrase[k + 1] == '/') {
                    // close tag read case
                    if (s.size() == 0) {
                        // cloas tag but stack empty is false
                        cout << "illegal\n";
                        break;
                    }else {
                        string a = s.top();
                        s.pop();
                        k++;
                        k++;
                        for (int i = 0; i < a.size(); i++, k++) {
                            if (a[i] != phrase[k]) {
                                flag = false;
                                break;
                            }
                        }
                        
                        if (!flag) {
                            cout << "illegal\n";
                            break;
                        }
                    }
                }else if(phrase[k + 1] == 'a') {
                    string a = "a";
                    s.push(a);
                    a = "";
                    
                }else if (phrase[k + 1] == 'b' && phrase[k + 2] == 'r') {
                    k += 5;
                    
                }else {
                    // not <br> <a>
                    k++;
                    string a;
                    
                    while (phrase[k] != '>') {
                        a += phrase[k];
                        k++;
                    }
                    s.push(a);
                    a = "";
                }
            }
            
            k++;
        }
    }
}
