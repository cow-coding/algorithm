#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n_case, student, score[1001] = {0}, sum[10001] = {0}, avg[1001] = {0};
    double percent[1001] = {0}, cnt[1001] = {0};
    cin >> n_case;
    
    for (int i = 1; i <= n_case; i++) // test case input
    {
        cin >> student;
        
        for (int j = 1; j <= student; j++) // student score input
        {
            cin >> score[j];
            sum[i] += score[j];
            avg[i] = sum[i] / student;
            
            if (j == student)
            {
                for (int k = 1; k <= j; k++)
                {
                    if (score[k] > avg[i])
                    {
                        cnt[i]++;
                    }
                }
            }
        }
        
        percent[i] = (cnt[i] / static_cast<double>(student)) * 100;
        cout << setprecision(3) << fixed << percent[i] << "%\n";
    }
}
