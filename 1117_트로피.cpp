#include <iostream>
#include <vector>
int main()
{

    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int Case = 0;
    cin >> Case;

    vector<int> tropi;
    for (int i = 0; i < Case; ++i)
    {
        int h = 0;
        cin >> h;
        tropi.push_back(h);
    }

    int hCheck = 0;
    int result1 = 0;
    int result2 = 0;


    
    for (int i = 0; i < tropi.size(); ++i)
    {
        if (tropi[i] > hCheck)
        {
            result1 += 1;
            hCheck = tropi[i];
        }
    }

    hCheck = 0;
    for (int j = 0; j < tropi.size(); ++j)
    {
        if (tropi[tropi.size() - j - 1] > hCheck)
        {
            result2 += 1;
            hCheck = tropi[tropi.size() - j - 1];
        }
    }
    
    cout << result1 << "\n" << result2;


}