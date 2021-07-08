#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100001];
    int tmp[100001] = {0,};

    int length;
    int num;
    int tmp1{0};

    cin >> length >> num;

    for (int i = 0 ; i < num; i++)
    {
        cin >> arr[i];

        if (i == 0)
            tmp[i] = arr[i];
        else
        {
            tmp[i] = arr[i] - arr[i - 1];

            if (tmp[i] % 2 == 0)
                tmp[i] /= 2;
            else
                tmp[i] = (tmp[i] / 2) + 1;
        }

        if (i == num - 1)
           tmp1 = length - arr[i];
    }

    sort(tmp, tmp + num);

    if (tmp[num - 1] >= tmp1)
        cout << tmp[num - 1] << "\n";
    else
        cout << tmp1 << "\n";

}
