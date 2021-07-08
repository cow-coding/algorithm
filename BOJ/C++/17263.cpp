#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[500000];
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr, arr + N);
    
    cout << arr[N - 1];
}
