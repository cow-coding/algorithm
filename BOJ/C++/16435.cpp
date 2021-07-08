#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> fruit;
    int numfruit, height;
    int length;
    
    cin >> numfruit >> length;
    
    for (int i = 0; i < numfruit; i++)
    {
        cin >> height;
        fruit.push_back(height);
    }
    
    sort(fruit.begin(), fruit.end());
    
    for (int i = 0; i < fruit.size(); i++)
    {
        if (length >= fruit.at(i))
        {
            length++;
        }
    }
    
    cout << length << "\n";
}
