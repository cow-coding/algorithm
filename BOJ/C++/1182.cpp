#include <iostream>
using namespace std;

int main()
{
    int arr[21] = {0,};
    int sum[21] ={0,};
    int test;
    int cnt{0};
    int ret;

    cin >> test >> ret;

    for (int i = 1; i <= test; i++)
    {
        cin >> arr[i];

        if (i == 1)
            sum[i] = arr[i];
        else
            sum[i] = sum[i - 1] + arr[i];
    }


}
