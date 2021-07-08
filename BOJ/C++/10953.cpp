#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    char numl[3];
    string num;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        int sum = 0;
        cin >> num;
        
        for (int j = 0; j < 3; j++)
        {
            numl[j] = num[j];
        }
        
        for (int j = 0; j < 3; j++)
        {
            if (numl[j] == ',') {
                sum = (numl[j-1] - '0') + (numl[j+1] - '0');
            }
        }
        
        cout << sum << endl;
    }

    
}
