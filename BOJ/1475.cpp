#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    int num[10] = {0, }; // 0 ~ 9 중복 갯수 확인
    int result{0};
    int maxi{0};
    
    cin >> input;
    
    for (int i = 0; i < input.size(); i++)
        num[(input[i] - '0')]++;
    
    for (int i = 0; i < 10; i++) // 가장 많이 카운팅 된 숫자만큼 세트가 필요
    {
        if (i == 6 || i == 9)
            continue;
        else if (num[i] > maxi)
            maxi = num[i];
    }
    
    int spn = num[6] + num[9];
    int set;
    
    if (spn % 2 == 0) {
        set = spn / 2;
    } else
        set = (spn / 2) + 1;
    
    if (num[6] == num[9])
    {
        if (num[6] > maxi)
            result += num[6];
        else
            result += maxi;
    } else
    {
        if (set < maxi)
            result += maxi;
        else
            result += set;
    }
    
    cout << result << endl;
}
