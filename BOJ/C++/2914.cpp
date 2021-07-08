#include <iostream>
using namespace std;

int main()
{
    int music, avg;
    int result;
    
    cin >> music >> avg;
    
    if (avg == 1)
        result = music * avg;
    else
        result = music * (avg - 1) + 1;
    
    cout << result << endl;
    return 0;
}
