#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int num;
        int cnt = 0;
        cin >> num;

        while (num != 0)
        {
        if (num % 2 == 1)
        {
            cout << cnt << " ";
            num /= 2;
        } else if (num % 2 == 0)
            num /= 2;
            cnt++;
        }

    }

}
