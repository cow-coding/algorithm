#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int cnt{1};

    getline(cin, word);

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == ' ')
            cnt++;
    }

    if (word[word.size() - 1] == ' ')
    {
        cnt--;
    }

    if (word[0] == ' ')
    {
        cnt--;
    }

    cout << cnt << "\n";
}
