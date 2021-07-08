#include <iostream>
using namespace std;

int kakao2017(int);
int kakao2018(int);

int main()
{
    int test;
    int alpha{0}, betha{0};
    
    cin >> test;
    
    for (int i = 0; i < test; i++)
    {
        cin >> alpha >> betha;
        cout << kakao2017(alpha) + kakao2018(betha) << endl;
    }
}


int kakao2017(int num)
{
    int price{0};
    if (num == 1)
        price = 5000000;
    else if (num >= 2 && num <= 3)
        price = 3000000;
    else if (num >= 4 && num <= 6)
        price = 2000000;
    else if (num >= 7 && num <= 10)
        price = 500000;
    else if (num >= 11 && num <= 15)
        price = 300000;
    else if (num >= 16 && num <= 21)
        price = 100000;
    
    return price;
}

int kakao2018(int num)
{
    int price{0};
    if (num == 1)
        price = 5120000;
    else if (num >= 2 && num <= 3)
        price = 2560000;
    else if (num >= 4 && num <= 7)
        price = 1280000;
    else if (num >= 8 && num <= 15)
        price = 640000;
    else if (num >= 16 && num <= 31)
        price = 320000;
    
    return price;
}
