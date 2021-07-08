#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<int> print;
    int N, rem;
    int B, tmp;
    char result;
    
    cin >> N >> B;
    
    rem = N;
    
    while (rem != 0)
    {
        tmp = rem % B;
        
        if (tmp > 9)
            print.push(tmp + 55);
        else
            print.push(tmp);
        
        rem /= B;
    }
    
    while (print.empty() == false)
    {
        if (print.top() > 9)
        {
            result = print.top();
            cout << result;
        } else
            cout << print.top();
        
        print.pop();
    }
    
    cout << endl;
}
