#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int result{0}, pipe{0};
    char before;
    
    cin >> input;
    
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(')
            pipe++; // 여는 괄호인 경우 파이프 길이를 늘려준다.
        else
        {
            pipe--; // 닫는 괄호면 파이프 길이를 줄여준다.
            
            if (before == '(')
                result += pipe;
            else
                result++;
        }
        
        before = input[i];
    }
    
    cout << result << endl;
}
