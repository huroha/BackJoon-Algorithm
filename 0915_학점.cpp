#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    vector<int> result = {};

    for (int i = 0; i < 50; ++i)
    {
        int a =0;
        cin >> a;
        result.push_back(a);
    }   


    int hong =0;
    cin >>hong;
    int rank=0;
    for (int i = 0; i < 50; ++i)
    {
        
        if (hong == result[i])
        {
            rank = i+1;
            break;
        }

    }

    if (rank < 6)
    {
        cout << "A+";
    }
    else if (rank > 5 && rank < 16)
    {
        cout << "A0";
    } 
    else if (rank > 15 && rank < 31)
    {
        cout << "B+";
    }
    else if (rank > 30 && rank < 36)
    {
        cout << "B0";
    }
    else if (rank > 35 && rank < 46)
    {
        cout << "C+";
    }
    else if (rank > 45 && rank < 49)
    {
        cout << "C0";
    }
    else
    {
        cout << "F";
    }


}