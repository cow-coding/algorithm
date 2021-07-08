#include <iostream>
using namespace std;

int mem[1001][1001];

int main()
{
    int n, m;
    
    cin >> n >> m;
    
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            if (i == j || j == 0) {
                mem[i][j] = 1;
                continue;
            }
            
            mem[i][j] = (mem[i - 1][j] + mem[i - 1][j - 1]) % 10007;
            
        }
    }
    
    cout << mem[n][m] << "\n";
}

