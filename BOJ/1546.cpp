#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n_sub;
    double score[1001], max{0}, newscore{0}, avg{0}, sum{0};
    cin >> n_sub;
    
    for (int i = 1; i <= n_sub; i++) // score 값 배열에 저장
    {
        cin >> score[i];
        
        if (score[i] > max)
        {
            max = score[i];
        }
    }
    
    for (int i = 1; i <= n_sub; i++)
    {
        newscore = (score[i] / max) * 100;
        sum += newscore;
    }
    
    avg = sum / n_sub;
    cout << setprecision(10) << fixed <<avg << "\n";
}
