#include <iostream>
#include <string>

int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int Case =0;

    string bs = {};

    cin >> Case;
    cin >> bs;

    int Check =0;
    int i =0;
    while (true)
    {
        // security = 8글자 , bigdata = 7글자
        if (bs[i] == 's')
        {
            i+=8;
            ++Check;
            --Case;
        }
        else if (bs[i] == 'b')
        {
            i+=7;
            --Check;
            --Case;
        }

        if(Case == 0)
            break;
    }

    if (Check == 0)
    {
        cout <<"bigdata? security!";
    }
    else if (Check > 0)
    {
        cout << "security!";
    }
    else
    {
        cout << "bigdata?";
    }
}