#include <iostream>
#include <vector>

int main()
{   
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    int Student=0, Card=0;
    cin>> Student >> Card;
    vector<int> result = {};
    
    for (int i = 0; i < Student; ++i)
    {
        int j=0;
        cin >>j;
        result.push_back(j);

    }

    for (int i = 1; i < Card+1; ++i)
    {
        for (int j = 0; j < result.size()-1; ++j)
        {
            int left = result[j] % i;
            int right = result[j+1] %i;
            if (left > right)
            {
                int temp= 0;
                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }

    }

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << "\n";
    }
}