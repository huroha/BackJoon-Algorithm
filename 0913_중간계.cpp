#include <iostream>

int main()
{
    
    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int Battle =0;

    cin >> Battle;


    for (int i = 0; i < Battle; ++i)
    {
        int hScore = 0;
        int mScore = 0;
        int human = 6,mon=7;
        for (int j = 0; j < human; ++j)
        {
            int entry =0;
            cin >> entry;
            if (entry != 0)
            {
                if(j<3)
                    hScore += (j+1)*entry;
                else if(j<5 && j>2)
                    hScore += j * entry;
                else if(j==5)
                    hScore += 10 * entry;
            }
        }
        for (int k = 0; k < mon; ++k)
        {
            int entry =0;
            cin >> entry;
            if (entry != 0)
            {
                if (k == 0)
                    mScore += 1 * entry;
                else if (k < 4)
                    mScore += 2 * entry;
                else if (k == 4)
                    mScore += 3 * entry;
                else if (k == 5)
                    mScore += 5 * entry;
                else {
                    mScore += 10 * entry;
                }
            }
           
        }
        if(hScore > mScore)
            cout << "Battle " << i+1 << ": Good triumphs over Evil\n";
        else if(mScore > hScore)
            cout << "Battle " << i+1 <<": Evil eradicates all trace of Good\n";
        else
            cout << "Battle " << i+1 << ": No victor on this battle field\n";

    }
}