#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> citations;
    vector<bool> index;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        citations.push_back(num);
    }
    
    
    index.resize(citations.size()); // 인덱스 체크를 한다. 중복 논문 제거용

    int answer = 0;
    sort(citations.begin(), citations.end());

    int maximum = citations[citations.size() - 1]; // 최대 인용까지만 체크한다.

    for (int i = 0; i < maximum; i++)
    {
        int up = 0; // 이상 인용 개수
        int down = 0; // 이하 인용 개수
        for (int j = citations.size() - 1; j > -1; j--)
        {
            if (citations[j] >= i && up < i)
                // i번 이상 인용된 논문이 일단 i개 되는지 체크한다.
            {
                up++;
                index[j] = true;
            } else if (citations[j] <= i && !index[j])
            {
                down++;
                index[j] = true;
            }
        }

        if (up == i)
        {
            if (down <= i) {
                answer = i;
            }
        }
    }

    
    cout << answer << "\n";
}

