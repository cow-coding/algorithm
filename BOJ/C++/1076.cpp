#include <string>
#include <iostream>
using namespace std;

int main()
{
    string color[10] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    string input;
    unsigned long long int result[3];
    unsigned long long int ret;

    for (int i = 0; i < 3; i++)
    {
        cin >> input;
        for (int j = 0; j < 10; j++)
        {
            if (color[j] == input)
            {
                result[i] = j;
            }
        }
    }

    ret = result[0] * 10 + result[1];

    for (int i = 0; i < result[2]; i++)
    {
        ret *= 10;
    }

    cout << ret << endl;
}
