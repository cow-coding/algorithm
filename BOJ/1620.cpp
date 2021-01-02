#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int numPoke, numQ;
    map<string, int> dogam;
    string name[100001];
    
    cin >> numPoke >> numQ;
    
    cin.ignore();
    for (int i = 1; i <= numPoke; i++)
    {
        cin >> name[i];
        
        dogam[name[i]] = i;
    }
    
    for (int i = 0; i < numQ; i++)
    {
        
        string Question;
        
        cin >> Question;
        
        if (Question[0] - '0' >= 1 && Question[0] - '0' <= 9)
        {
            cout << name[atoi(Question.c_str())] << "\n";
        }else
        {
            map<string, int>::iterator iter = dogam.find(Question);
            
            cout << iter -> second << "\n";
        }
    }
    
}
