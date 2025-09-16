#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int weight=0, height=0;
    int cutCount = 0;
    cin >> weight >> height >> cutCount;

    vector<int> Wcut;
    vector<int> Hcut;
    

    for (int i = 0; i < cutCount; ++i)
    {
        int num = 0;
        cin >> num;
        if (num == 0)
        {
            int Wnum = 0;
            cin >> Wnum;
            Wcut.push_back(Wnum);
        }
        else
        {
            int Hnum = 0;
            cin >> Hnum;
            Hcut.push_back(Hnum);
        }
    }

    sort(Wcut.begin(), Wcut.end());
    sort(Hcut.begin(), Hcut.end());
    
    int maxW =0;
    int maxH = 0;
    for (int i = 0; i < Wcut.size(); ++i)
    {
        if (i == 0)
        {
            if (maxW < Wcut[i])
                maxW = Wcut[i];
        }
        else
        {
            if (maxW < Wcut[i] - Wcut[i - 1])
                maxW = Wcut[i] - Wcut[i - 1];
        }
    }
    if (!Wcut.empty())
    {
        if (maxW < height - Wcut[Wcut.size() - 1])
            maxW = height - Wcut[Wcut.size() - 1];
    }
    else
    {
        maxW = height;
    }

    for (int i = 0; i < Hcut.size(); ++i)
    {
        if (i == 0)
        {
            if (maxH < Hcut[i])
                maxH = Hcut[i];
        }
        else
        {
            if (maxH < Hcut[i] - Hcut[i - 1])
                maxH = Hcut[i] - Hcut[i - 1];
        }
    }
    if (!Hcut.empty())
    {
        if (maxH < weight - Hcut[Hcut.size() - 1])
            maxH = weight - Hcut[Hcut.size() - 1];
    }
    else
    {
        maxH = weight;
    }

    cout << maxH * maxW;
}