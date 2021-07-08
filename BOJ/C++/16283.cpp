#include <iostream>
using namespace std;

int main()
{
    int sheep, goat, a, b, total, eattotal;
    int solnum{0};
    
    cin >> a >> b >> total >> eattotal;
    
    for (int sNum = 1, gNum = total - 1; sNum <= total - 1; sNum++, gNum--)
    {
        if (solnum < 2)
        {
            if ((sNum * a + gNum * b) == eattotal)
            {
                sheep = sNum;
                goat = gNum;
                solnum++;
            }
        } else
            break;
    }
    
    if (solnum == 1)
        cout << sheep << " " << goat  << "\n";
    else
        cout << -1 << "\n";
}
