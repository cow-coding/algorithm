#include <iostream>
using namespace std;

int main()
{
    int max{0};
    int people{0};
    
    for (int i = 0; i < 4; i++) {
        int in, out;
        
        cin >> out >> in;
        
        people += in;
        people -= out;
        
        if (max < people) {
            max = people;
        }
    }
    
    cout << max << "\n";
}
