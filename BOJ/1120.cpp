#include <queue>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    queue<char> save1;
    queue<char> save2;

    int cnt;
    int ret{0};
    string  a, b;

    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
        save1.push(a[i]);

    for (int i = 0; i < b.size(); i++)
        save2.push(b[i]);

    cnt = save2.size() - save1.size(); // 두 문자열의 길이 차를 저장한다 : 연산 횟수


}
