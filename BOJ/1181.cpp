#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct body {
    string input;
    int size{0};
};

bool compare(const body& b1, const body& b2)
{
    if (b1.size < b2.size)
        return true;
    else if (b1.size == b2.size)
        return b1.input < b2.input;
    return false;
}

int main()
{
    body input[20000];
    int test;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> input[i].input;

        for (int j = 0; j < input[i].input.size() - 1; j++)
            input[i].size++;
    }

    sort(input, input + test, compare); // size로 정렬


    for (int i = 0; i < test; i++)
    {
        if (i != 0)
        {
            if (input[i].input != input[i- 1].input)
                cout << input[i].input << "\n";
        } else
            cout << input[0].input << "\n";
    }
}
