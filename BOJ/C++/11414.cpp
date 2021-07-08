#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[100001] = {0, };
    int sum[100001] = {0, };
    int test;
    
    cin >> test;
    
    for (int i = 1; i <= test; i++)
    {
        cin >> arr[i];
        
        if (i == 0)
            sum[i] = arr[i];
        else
            sum[i] = sum[i - 1] + arr[i];
    }
    
    int tmp;
    
    cin >> tmp;
    
    for (int i = 0; i < tmp; i++)
    {
        int start, end;
        
        cin >> start >> end;
        
        int result = sum[end] - sum[start - 1];
        
        cout << result << "\n";
    }
}
