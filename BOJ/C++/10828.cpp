#include <iostream>
#include <stack>
#include <string>
using namespace std;

void installstk(string);

int main()
{
    stack<int> stk;
    int test, num;
    string order;
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> order;
        
        if (order == "push")
        {
            cin >> num;
            stk.push(num);
        } else if (order == "pop")
        {
            if (stk.empty() == 1)
            {
                cout << "-1\n";
            } else if (stk.empty() == 0)
            {
                cout << stk.top() << endl;
                stk.pop();
            }
        } else if (order == "size")
        {
            cout << stk.size() << endl;
        } else if (order == "empty")
        {
            if (stk.empty() == 1)
                cout << "1\n";
            else
                cout << "0\n";
        } else if (order == "top")
        {
            if (stk.empty() == 1)
                cout << "-1\n";
            else
                cout << stk.top() << endl;
        }
    }
    
}
