#include <iostream>
using namespace std;

int main()
{
    int N{0} ,sum{0};
    char word[101] = {0};
    
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> word[i];
        sum += (word[i] - '0');
    }
    cout << sum << "\n";
}
