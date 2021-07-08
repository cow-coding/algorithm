#include <iostream>
using namespace std;

int main()
{
    int test;
    int k, n;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        int arr[15][15] ={{0,0}, };
        
        for (int i = 0; i < 15; i++)
            arr[0][i] = i;
        
        cin >> k >> n;
        
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int l = 1; l <= j; l++)
                {
                    arr[i][j] += arr[i - 1][l];
                }
            }
        }
        
        cout << arr[k][n] << endl;
    }
}




// 1f 1 3 6
// 0f 1 2 3 4 5 ... n
