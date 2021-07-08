#include <iostream>
using namespace std;

int main()
{
    int test;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        int num;
        int sum = 0;
        cin >> num;
        
        for (int j = 0; j < num; j++)
        {
            int input;
            cin >> input;
            sum += input;
        }
        
        cout << sum << endl;
    }
}
