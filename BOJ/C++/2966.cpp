#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int test, cntA{0}, cntB{0}, cntG{0}, tmp1, tmp2, result;
    string answer;
    
    cin >> test;
    cin >> answer;
    
    for (int i = 0; i < answer.size(); i++)
    {
        switch (i % 3) {
            case 0:
                if (answer[i] == 'A')
                    cntA++;
                break;
                
            case 1:
                if (answer[i] == 'B')
                    cntA++;
                break;
                
            case 2:
                if (answer[i] == 'C')
                    cntA++;
                break;
        }
    }
    
    for (int i = 0; i < answer.size(); i++)
    {
        switch (i % 4) {
            case 0:
            case 2:
                if (answer[i] == 'B')
                    cntB++;
                break;
                
            case 1:
                if (answer[i] == 'A')
                    cntB++;
                break;
                
            case 3:
                if (answer[i] == 'C')
                    cntB++;
                break;
        }
    }
    
    for (int i = 0; i < answer.size(); i++)
    {
        switch (i % 6) {
            case 0:
            case 1:
                if (answer[i] == 'C')
                    cntG++;
                break;
                
            case 2:
            case 3:
                if (answer[i] == 'A')
                    cntG++;
                break;
                
            case 4:
            case 5:
                if (answer[i] == 'B')
                    cntG++;
                break;
        }
    }
    
    tmp1 = max(cntA, cntB);
    tmp2 = max(cntB, cntG);
    result = max(tmp1, tmp2);
    
    if (cntA == cntB && cntA == cntG)
    {
        cout << cntA << "\n";
        cout << "Adrian\n" << "Bruno\n" << "Goran\n";
    } else if (cntA == cntB && cntA > cntG)
    {
        cout << cntA << "\n";
        cout << "Adrian\n" << "Bruno\n";
    } else if (cntA == cntG && cntA > cntB)
    {
        cout << cntA << "\n";
        cout << "Adrian\n" << "Goran\n";
    } else if (cntB == cntG && cntB > cntA)
    {
        cout << cntB << "\n";
        cout << "Bruno\n" << "Goran\n";
    } else if (cntA != cntB || cntA != cntG || cntB != cntG)
    {
        if (result == cntA)
            cout << cntA << "\n" << "Adrian\n";
        else if (result == cntB)
            cout << cntB << "\n" << "Bruno\n";
        else if (result == cntG)
            cout << cntG << "\n" << "Goran\n";
    }
    
}
