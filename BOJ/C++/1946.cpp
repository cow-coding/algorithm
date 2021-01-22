#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int score[100010] = {0, }; // 배열의 인덱스는 서류 점수, 인덱스의 값은 면접점수
    
    int test, tmp;
    int document, meeting;
    int people;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        int cnt{1};
        
        cin >> people;
        
        for (int i = 0; i < people; i++)
        {
            cin >> document >> meeting;
            score[document] = meeting;
        }
        
        tmp = score[1];
        
        for (int i = 2; i <= people; i++)
        {
            if (tmp > score[i])
            {
                cnt++;
                tmp = score[i];
            }
        }
        
        cout << cnt << endl;
    }
}
