#include <iostream>
#include <vector>
using namespace std;

vector<int> eureka;

void setting()
{
    int N = 1;
    
    while ((N * (N + 1)) / 2 < 1000) {
        eureka.push_back(N * (N + 1) / 2);
        N++;
    }
}

bool summage(int result)
{
    for (int i = 0; i < eureka.size(); i++)
        for (int j = 0; j < eureka.size(); j++)
            for (int k = 0; k < eureka.size(); k++)
                if (eureka[i] + eureka[j] + eureka[k] == result)
                    return true;
    
    return false;
}

int main()
{
    int test;
    int num;
    
    setting();
    
    cin >> test;
    
    while (test--) {
        int check;
        
        cin >> check;
        
        cout << summage(check) << "\n";
    }
    
    return 0;
}
