#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    time_t curr_time;
    
    // 시간 표시를 위한 구조체
    struct tm *curr_tm;
    
    // 1970년 1월 1일부터의 시간을 계산
    curr_time = time(NULL);
    
    // 지역 시간을 기준으로 변환 하기위해 저장
    curr_tm = localtime(&curr_time);
    
    cout << curr_tm -> tm_year + 1900 << curr_tm -> tm_mon + 1 << curr_tm -> tm_mday << endl;
}
