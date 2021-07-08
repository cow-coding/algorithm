#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b; // min
    string A, B; // max
    int max, min;
    
    cin >> a >> b;
    
    A = a;
    B = b;
    
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == '5')
            A[i] = '6';
    }
    
    for (int i = 0; i < B.size(); i++) {
        if (B[i] == '5')
            B[i] = '6';
    }
    
    
    for (int j = 0; j < a.size(); j++) {
        if (a[j] == '6')
            a[j] = '5';
    }
    
    for (int j = 0; j < b.size(); j++) {
        if (b[j] == '6')
            b[j] = '5';
    }
    
    
    max = atoi(A.c_str()) + atoi(B.c_str());
    min = atoi(a.c_str()) + atoi(b.c_str());
    
    cout << min << " " << max << "\n";
}
