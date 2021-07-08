#include <iostream>
#include <algorithm>
using namespace std;

struct number
{
    int score;
    int pos;
};

bool compares(number a, number b)
{
    return a.score > b.score;
}

int main()
{
    number input[8];
    
    int rank[5];
    
    for (int i = 0; i < 8; i++)
    {
        int score;
        
        cin >> score;
        
        input[i].score = score;
        input[i].pos = i + 1;
    }
    
    sort(input, input + 8, compares);
    
    int sum{0};
    
    for (int i = 0; i < 5; i++)
        sum += input[i].score;
    
    cout << sum << endl;
    
    for (int i = 0; i < 5; i++)
        rank[i] = input[i].pos;
    
    sort(rank, rank + 5, less<int>());
    
    
    for (int i = 0; i < 5; i++)
        cout << rank[i] << " ";
    
}
