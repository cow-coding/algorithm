#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int five{0}, two{0};
    int tmp;
    
    cin >> N;
    
    for (int i = 2; i <= N; i++)
    {
        tmp = i;
        
        while (!(tmp % 5)) {
            five++;
            tmp /= 5;
        }
        
        while (!(tmp % 2)) {
            two++;
            tmp /= 2;
        }
    }
    
    (two < five) ? (cout << two << "\n") : (cout << five << "\n");
}
