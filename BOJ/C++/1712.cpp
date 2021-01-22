#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    
    cin >> A >> B >> C;
    
    long long int result;
    long long int tmp;
    
    if (C == B) {
        cout << "-1\n";
    } else {
        result = A / (C - B);
        tmp = A / (C - B);
        
        if (result < 0)
            cout << "-1\n";
        else if (result >= 0)
            cout << result + 1 << "\n";
    }
    
    
}
