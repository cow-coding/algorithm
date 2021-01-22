#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<char> v;
    string input;
    int test;
    int cnt = 0;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> input;

        bool alphabet[26] = {false, };
        bool checker = false;

        for (int i = 0; i < input.size(); i++)
        {
            if (i == 0)
                alphabet[input[i] - 'a'] = true;
            else
            {
                if (input[i] != input[i - 1]) // 연속 알파벳이 다를 때
                {
                    if (alphabet[input[i] - 'a'] == true) // 이전에 해당 알파벳이 존재했다면?
                    {
                        checker = true;
                        break;
                    } else
                        alphabet[input[i] - 'a'] = true;
                }
            }
        }

        if (checker == false)
            cnt++;
    }

    cout << cnt;
}
