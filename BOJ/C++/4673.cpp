#include <iostream>
using namespace std;

#define f false
#define t true

int main()
{
    bool arr[20000] = {f,};
    
    for (int i = 1; i <= 10000; i++) {
        
        int rem = i;
        int tmp = i;
        int selfnum = 0;
        
        while (rem != 0) { // 123
            tmp = rem % 10;
            rem = rem / 10;
            
            selfnum += tmp;
        }
        
        arr[selfnum + i] = true;
    }
    
    for (int i = 1; i <= 10000; i++) {
        
        if (!arr[i])
            cout << i << "\n";
    }
}
