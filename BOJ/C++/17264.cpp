#include <iostream>
#include <string>
using namespace std;

struct hacking {
    string name;
    char wl;
};

int main()
{
    hacking info[1000];
    
    int gameNum, player;
    int ScoreWin, ScoreLose, Grade;
    int result{0};
    string playername;
    
    cin >> gameNum >> player;
    cin >> ScoreWin >> ScoreLose >> Grade;
    
    for (int i = 0; i < player; i++)
        cin >> info[i].name >> info[i].wl;
    
    while (gameNum--)
    {
        cin >> playername;
        
        int wcount{0}, lcount{0};
        
        for (int i = 0; i < player; i++) // 동일 인물 존재 여부 체크
        {
            if (playername == info[i].name)
            {
                if (info[i].wl == 'W')
                    wcount++;
                else if (info[i].wl == 'L')
                    lcount++;
            }
        }
        
        if (wcount != 0 && lcount == 0)
            result += ScoreWin;
        else
            result -= ScoreLose;
        
        if (result >= Grade)
        {
            cout << "I AM NOT IRONMAN!!\n";
            return 0;
        }
        
        if (result < 0)
            result = 0;
    }
    
    cout << "I AM IRONMAN!!\n";
}
