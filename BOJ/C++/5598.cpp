#include <iostream>
#include <string>
using namespace std;

//변환전    A 65 B C D E F G H I J K L M N O P Q R S T U V W 87 X 88 Y 89 Z 90
//변환후    D 68 E F G H I J K L M N O P Q R S T U V W X Y Z 90 A 65 B 66 C 67

int main()
{
    string word;
    
    cin >> word;
    
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 68 && word[i] <= 90)
        {
            word[i] = word[i] - 3;
        } else
        {
            if (word[i] == 'A')
            {
                word[i] = 'X';
            } else if (word[i] == 'B')
            {
                word[i] = 'Y';
            } else if (word[i] == 'C')
            {
                word[i] = 'Z';
            }
        }
    }
    
    cout << word << endl;
}
