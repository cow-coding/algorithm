#include <iostream>
using namespace std;

int main()
{
    int people, area;
    int total;
    int article;
    
    cin >> people >> area;
    
    total = people * area;
    
    for (int i = 0; i < 5; i++)
    {
        cin >> article;
        cout << article - total << " ";
    }
}
