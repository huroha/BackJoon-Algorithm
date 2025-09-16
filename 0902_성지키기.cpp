#include <iostream>
#include <vector>
#include <set>
int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    vector<char> result[50];


    int col=0,row=0;
    int count = 0;
    cin >> col >>row;

    for (int i = 0; i < col; ++i)
    {
        char a = {};
        for (int j = 0; j < row; ++j)
        {
            cin >> a;
            result[i].push_back(a);
        }

    }

    set<int> result2 = {};
    set<int> result1 = {};


    // 세로줄 검사
    for (int i = 0; i < row; i++)
    {
        count = 0;
        for (int j = 0; j < col; ++j)
        {
            if (result[j][i] == 'X')
            {
                ++count;
                break;
            }
        }
        if (count == 0)
        {
            result1.insert(i);
        }
    }

    //가로줄 검사
    for (int i = 0; i < col; ++i)
    {
        count = 0;
        for (int j = 0; j < row; ++j)
        {
            if (result[i][j] == 'X')
            {
                ++count;
                break;
            }
        }
        if (count == 0)
        {
            result2.insert(i);
        }
    }

    if (result1.size() > result2.size())
    {
        cout << result1.size();
    }
    else
    {
        cout << result2.size();
    }
}