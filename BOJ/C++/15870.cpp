#include <iostream>
#include <stack>
using namespace std;

int check(int num) // 멀티탭에 규칙으로 꽂을 수 있는 최대 콘센트 수
{
    int result{0};
    if (num % 2 == 0)
    {
        result = num / 2;
    } else if (num % 2 != 0)
    {
        result = num / 2 + 1;
    }
    return result;
}

int main()
{
    int multi, people, hole;
    
    cin >> people >> multi;
    
    int pass = people;
    
    for (int i = 0; i < multi; i++) // 멀티탭	 구 갯수 입력
    {
        cin >> hole;
        
        pass -= check(hole);
    }
    
    
    
    if (pass <= 0)
    {
        cout << "YES\n";
    } else if (pass > 0)
        cout << "NO\n";
    
    return 0;
}
