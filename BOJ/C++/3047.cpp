#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];
    string save;
    
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    
    sort(arr, arr + 3);
    
    cin >> save;
    
    for (int i = 0; i < save.size(); i++)
    {
        if (save[i] == 'A')
            cout << arr[0];
        else if (save[i] == 'B')
            cout << arr[1];
        else
            cout << arr[2];
        
        cout << " ";
    }
    
    cout << "\n";
    return 0;
}
