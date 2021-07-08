#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100001] = {0, };
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N, greater<int>());

    for (int i = 0; i < N; i++)
        arr[i] = arr[i] + (i + 1);

    sort(arr, arr + N, greater<int>());

    cout << arr[0] + 1<< "\n";
}
