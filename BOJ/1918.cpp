#include <iostream>
#include <stack>
#include <string>
using namespace std;

inline int check(char op)
{
    switch (op) {
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
    
    return -1;
}

int main()
{
    stack<char> operate; // 연산자 저장 스택
    
    string input;
    
    cin >> input;
    
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= 65 && input[i] <= 90)
            cout << input[i];
        
        if (input[i] == '(')
            operate.push(input[i]);
        else if (input[i] == ')')
        {
            while (!operate.empty())
            {
                if (operate.top() == '(')
                {
                    operate.pop();
                    break;
                } else {
                    cout << operate.top();
                    operate.pop();
                }
            }
        }
        
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/')
        {
            while (!operate.empty())
            {
                if (check(input[i]) <= check(operate.top()))
                {
                    cout << operate.top();
                    operate.pop();
                } else
                    break;
            }
            operate.push(input[i]);
        }
    }
    
    while (!operate.empty())
    {
        cout << operate.top();
        operate.pop();
    }
    
}
