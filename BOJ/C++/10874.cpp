/* 이번 문제의 핵심은 번호별 문제의 답 함수는 다음과 같다.
 n번째 문제의 정답은 ((n - 1)mod 5) + 1 이다.
 만점인 경우 재시험이다.
 재시험 학생을 출력
 */
#include <iostream>
using namespace std;

int answersheet(int, int);

int main()
{
    int student;
    int answer;
    int stusum[110] = {0, };
    
    cin >> student;
    
    for (int i = 0; i < student; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cin >> answer;
            
            stusum[i] += answersheet(answer, j);
        }
        
        if (stusum[i] == 10)
            cout << i + 1 << endl;
    }
}

int answersheet(int num1, int num2)
{
    int answer;
    int result;
    
    answer = ((num1 - 1) % 5) + 1;
    
    if (answer == ((num2 - 1) % 5) + 1)
    {
        result = 1;
        
        return result;
    } else
        result = 0;
    
    return result;
}
