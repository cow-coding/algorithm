#include <iostream>
using namespace std;

int main()
{
    int input, num, cnt{0}, a, b, c;

    cin >> input;

    if (input < 100)
    {
        cout << input << "\n";
    } else if (input <= 1000)
    {
        for (int i = 100; i <= input; i++)
        {
            num = i;
            c = num % 10; // 1의 자리
            b = (num / 10) % 10; // 10의 자리
            a = num / 100; // 100의 자리

            if (a - b == b - c)
            {
                cnt++;
            }
        }
        cout << 99 + cnt << "\n";
    }
    return 0;
}
