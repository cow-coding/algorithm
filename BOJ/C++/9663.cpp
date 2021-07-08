#include <iostream>
using namespace std;

int N;
int arr[15];
int cnt{0};

bool promising(int i)
{
    bool check = true;
    
    for (int j = 1; j < i; j++) {
        if (!check) break;
        
        if (arr[i] == arr[j] || abs(arr[i] - arr[j]) == i - j)
            check = false;
    }
    
    return check;
}

void backtracking(int n)
{
    if (promising(n)) {
        if (n == N)
            cnt++;
        else
            for (int i = 1; i <= N; i++) {
                arr[n + 1] = i;
                backtracking(n + 1);
            }
    }
}

int main()
{
    cin >> N;
    
    backtracking(0);
    cout << cnt << "\n";
    
}
