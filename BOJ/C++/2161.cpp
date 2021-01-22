#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> card;
    int test;
    
    cin >> test;
    
    for (int i = 1; i <= test; i++)
    {
        card.push(i);
    }
    
    while (card.size() != 0)
    {
        cout << card.front() << " ";
        card.pop();
        card.push(card.front());
        card.pop();
    }
    cout << endl;
    
    return 0;
}
