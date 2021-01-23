#include <iostream>
using namespace std;

int main()
{
    int a, b, c, result, cnt{1}, calc{0}, remain;
    int arr[10] = {0};
    
    cin >> a >> b >> c;
    result = a * b * c;
    
    while (1)
    {
        if (cnt == 1)
        {
            calc = result;
        }
        
        remain = calc % 10;
        calc /= 10;
        
        arr[remain]++;
        cnt++;
        
        if (calc == 0)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << arr[i] << "\n";
            }
            break;
        }
    }
}


