#include <iostream>
using namespace std;

int main()
{
    int testcase, score1, score2, ysum{0}, ksum{0}, cnt{1}, inning{1};
    
    cin >> testcase;
    
    while (cnt <= testcase)
    {
        while (inning <= 9)
        {
            cin >> score1 >> score2;
            ysum += score1;
            ksum += score2;
            inning++;
        }
        
        if (ysum > ksum)
            cout << "Yonsei\n";
        else if (ysum == ksum)
            cout << "Draw\n";
        else if (ysum < ksum)
            cout << "Korea";
        
        cnt++;
    }
}
