#include <iostream>
using namespace std;

int main()
{
    int start, end, sum{0}, cnt{0};

    cin >> start >> end;

    for (int i = 0; true; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cnt++;
            if (cnt >= start && cnt <= end)
                sum += i;
        }
        if (cnt > end)
            break;
    }

    cout << sum << endl;
}
