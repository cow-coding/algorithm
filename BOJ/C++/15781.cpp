#include <iostream>
using namespace std;

int main()
{
    int nhelmet, nvest;
    int helmet, vest;
    int mhelmet, mvest;
    int result;
    
    cin >> nhelmet >> nvest;
    
    for (int i = 0; i < nhelmet; i++)
    {
        cin >> helmet;
        
        if (i == 0)
        {
            mhelmet = helmet;
        } else if (mhelmet < helmet)
        {
            mhelmet = helmet;
        }
    }
    
    for (int i = 0; i < nvest; i++)
    {
        cin >> vest;
        
        if (i == 0)
        {
            mvest = vest;
        } else if (mvest < vest)
        {
            mvest = vest;
        }
    }
    result = mvest + mhelmet;
    cout << result << "\n";
    return 0;
}
