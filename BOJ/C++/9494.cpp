#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    int cnt, tmp{0};
    int line;
    
    while (1)
    {
        tmp = 0;
        cnt = 1;

        cin >> line;
        
        if (line == 0)
            return 0;
        
        cin.ignore();
        
        for (int i = 0; i < line; i++) {
            if (tmp == 0) {
                getline(cin, sentence);
                
                for (; tmp < sentence.size(); tmp++) {
                    if (sentence[tmp] == 32) {
                        break;
                    }
                    
                    cnt++;
                }
            }else {
                getline(cin, sentence);
                
                for (; tmp < sentence.size(); tmp++) {
                    if (sentence[tmp] == 32) {
                        break;
                    }
                    
                    cnt++;
                }
            }
        }
        
        cout << cnt << "\n";
    }
}


//4
//Lorem ipsum dolor sit amet, consectetur adipisicing elit,
//sed do eiusmod tempor incididunt ut labore et dolore magna
//aliqua. Ut enim ad minim veniam, quis nostrud exercitation
//ullamco laboris nisi ut aliquip ex ea commodo consequat.
//3
//Supercalifragilisticexpialidocious! Can you handle
//short
//lines?
//0
