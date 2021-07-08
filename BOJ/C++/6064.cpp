#include <iostream>
using namespace std;

long long int GCD(int a, int b)
{
    if (a % b == 0)
        return b;
    
    return GCD(b, a % b);
}

long long int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int test;
    int M, N, x, y;
    
    cin >> test;
    
    while (test--) {
        cin >> M >> N >> x >> y;
        
        long long int day;
        bool checker = false;
        
        for (int i = 0; x + (i * M) <= LCM(M, N); i++)
        {
            day = x + (i * M); // i번째 루프의 x일때 전체 일수
            
            int py = day % N; // i번째 루프의 x일때 y의 값
            
            if (py == 0)
                py = N;
            
            if (py == y) {
                checker = true;
                cout << day << "\n";
                break;
            }
        }
        
        if (!checker) {
            cout << "-1\n";
        }
    }
        
}
