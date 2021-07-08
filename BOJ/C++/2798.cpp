#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int CardNum;
    int MaxNum;
    int result{0};
    int sum;
    int card[110];
    
    cin >> CardNum >> MaxNum;
    
    for (int i = 0; i < CardNum; i++)
        cin >> card[i];
    
    sort(card, card + CardNum);
    
    for (int i = 0; i < CardNum - 2; i++)
    {
        for (int j = i + 1; j < CardNum - 1; j++)
        {
            for (int k = j + 1; k < CardNum; k++)
            {
                sum = card[i] + card[j] + card[k];
                
                if (sum <= MaxNum && result <= sum)
                    result = sum;
            }
        }
    }
    
    cout << result << endl;
}
