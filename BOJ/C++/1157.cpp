#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int cnt[26] = {0}, result{0}, _max{0};
    int draw{0};

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 65; j < 91; j++)
        {
            if (str[i] == j)
            {
                cnt[j - 65]++;
            }
        }

        for (int j = 97; j < 123; j++)
        {
            if (str[i] == j)
            {
                cnt[j - 97]++;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] > _max)
        {
            _max = cnt[i];
            result = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (_max == cnt[i])
        {
            draw++;
            if (draw >= 2)
            {
                cout << "?" << endl;
                return 0;
            }
        }
    }

    cout << (char)(result + 65) << endl;
    return 0;
}
