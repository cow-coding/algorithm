#include <iostream>
using namespace std;

int main()
{
    int num, max{0}, line{0};
    
    for (int i = 1; i <= 9; i++)
    {
        cin >> num;
        
        if (num >= max)
        {
            max = num;
            line = i;
        }
    }
    cout << max << "\n" << line << "\n";
}
