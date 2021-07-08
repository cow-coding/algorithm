#include <iostream>
using namespace std;

int main()
{
    int test;
    int nroom;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> nroom;

        int result = 0;
        int room[101] = {false}; // false는 문이 닫힌걸로 간주한다.

        for (int j = 1; j <= nroom; j++)
        {
            for (int k = 1; j * k <= nroom; k++)
            {
                if (room[j * k] == false)
                    room[j * k] = true;
                else if (room[j * k] == true)
                    room[j * k] = false;
            }
        }

        for (int i = 1; i <= nroom; i++)
        {
            if (room[i] == true)
                result += 1;
        }


        cout << result << endl;
    }
}
