#include <iostream>
#include <vector>
using namespace std;

int ans[6];
int arr[13];
int k;

// idx1은 arr 인덱스 idx2는 ans 인덱스

void backtrack(int idx1, int idx2)
{
    if (idx2 == 6)
    {
        for (int i = 0; i < 6; i++)
            cout << ans[i] << " ";
        
        cout << "\n";
        return;
    }
    
    for (int i = idx1; i < k; i++) {
        ans[idx2] = arr[i];
        backtrack(i + 1, idx2 + 1);
    }
    
    
}

int main()
{
    while (1) {
        cin >> k;
        
        if (k == 0) break;
        
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        
        backtrack(0, 0);
        
        cout << "\n";
    }
    
    return 0;
}
