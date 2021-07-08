#include <iostream>
using namespace std;

int main() {
    int origin;
    int end;
    int freeze, melt, unfreeze;
    int result = 0;
    
    cin >> origin >> end >> freeze >> melt >> unfreeze;
    
    if (origin < 0) {
        result = (-origin) * freeze + melt;
        result += end * unfreeze;
    }else {
        result = (end - origin) * unfreeze;
    }
    
    cout << result << "\n";
}
