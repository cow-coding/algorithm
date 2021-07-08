#include <iostream>
#include <string>
using namespace std;

int main()
{
    int test;
    
    cin >> test;
    
    while (test--) {
        int num, tmp;
        int rev = 0;
        bool result = true;
        
        cin >> num;
        tmp = num;
        
        while (tmp) {
            rev = (rev * 10) + (tmp % 10);
            tmp = tmp / 10;
        }
        
        int check;
        string ret;
        
        check = rev + num;
        ret = to_string(check);
        
        for (int i = 0; i < ret.size() / 2; i++)
        {
            if (ret[i] != ret[ret.size() - i - 1]) {
                result = false;
                break;
            }
        }
        
        if (result == true) {
            cout << "YES\n";
        } else
            cout << "NO\n";
    }
}
