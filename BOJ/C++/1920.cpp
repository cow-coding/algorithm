#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int arr[100000] = {0, };
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr, arr + N);
    
    int M;
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        
        if (binary_search(arr, arr + N, input))
            cout << "1\n";
        else
            cout << "0\n";
    }
    
    
}
