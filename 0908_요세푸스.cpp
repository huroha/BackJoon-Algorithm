#include <iostream>
#include <list>
#include <string>
int main()
{


    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    list<string> circle = {};

    int N=0, k = 0;
    string sResult ={};
    sResult.push_back('<');

    cin >> N >>k;

    for (int i = 0; i < N; ++i)
    {
        circle.push_back(to_string(i+1));
    }
    list<string>::iterator iter = circle.begin();

    while (circle.size() != 0)
    {
        
       

        for (int i = 0; i < k-1; ++i)
        {
            ++iter;
            if (iter == circle.end())
            {
                iter = circle.begin();
            }
        }
        sResult.append(*iter);
        iter = circle.erase(iter);
        if(iter == circle.end())
            iter = circle.begin();
        sResult.append(", ");

    }

    sResult.pop_back();
    sResult.pop_back();
    sResult.push_back('>');

    for (int i = 0; i < sResult.size(); ++i)
    {
        cout << sResult[i];
    }

}