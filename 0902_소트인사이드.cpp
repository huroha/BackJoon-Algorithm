#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    string input ={};


    cin >> input;
    vector<int> result = {};
    for (int i = 0; i < input.size(); ++i)
    {
        result.push_back((input[i])-48);
    }

    for (int j = result.size()-1; j > 0; --j)
    {
        for (int i = 0; i < result.size() - 1; ++i)
        {
            int temp = 0;
            if (result[i] < result[i + 1])
            {
                temp = result[i];
                result[i] = result[i + 1];
                result[i + 1] = temp;
            }

        }

    }
    for (int i = 0; i < result.size(); ++i)
    {
        cout<<result[i];
    }
    
}