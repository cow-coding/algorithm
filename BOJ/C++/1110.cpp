#include <iostream>
using namespace std;

int main()
{
    int num, first, second, sum, result{0}, cycle{0}; // 변수 선언
    
    cin >> num; // 숫자받기
    
    if (num < 10) // 10보다 작으면
        num = num * 10;
    
    result = num;
    
    while (1)
    {
        first = result / 10; // 첫째 자리 숫자
        second = result % 10; // 둘째 자리 숫자(나머지연산)
        sum = first + second; // 더한 값
        result = (second * 10) + (sum % 10); // 사이클
        cycle++; // 사이클 횟수
        
        if (num == result) // 사이클 값과 입력값이 같을떄 탈출
            break;
    }
    cout << cycle << "\n"; // 총 갯수출력
}
