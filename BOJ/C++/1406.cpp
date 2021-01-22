#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    list<char> edit;

    string start;
    cin >> start;

    for (int i = 0; i < start.size(); i++)
    {
        edit.push_back(start[i]);
    }

    int test;
    int lcnt{0}, dcnt{0};
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int point = lcnt - dcnt;
        char order;
        cin >> order;

        if (order == 'L')
            lcnt++;
        else if (order == 'D')
            dcnt++;
        else if (order == 'B')
        {

        } else if (order == 'P')
        {
            char input;
            cin >> input;

            edit.push_front(input)
        }
    }
}
