#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> max;
    stack<int> min;
    int test;
    int num;
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> num;
        
        if (max.empty())
            max.push(num);
        else
        {
            if (max.top() < num)
            {
                max.pop();
                max.push(num);
            }
        }
        
        if (min.empty())
            min.push(num);
        else
        {
            if (min.top() > num)
            {
                min.pop();
                min.push(num);
            }
        }
    }
    
    cout << min.top() << " " << max.top() << "\n";
}
