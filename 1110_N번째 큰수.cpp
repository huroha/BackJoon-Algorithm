#include <iostream>

#include <vector>
#include <algorithm>

int main()
{

    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);


    int Case;
    cin >> Case;
    for (int i = 0; i < Case; ++i)
    {
        vector<int> result;
        for (int j = 0; j < 10; ++j)
        {
            int input = 0;
            cin >> input;
            result.push_back(input);
        }
        
        sort(result.begin(), result.end());

        cout << result[result.size() -3] << "\n";


    }
}
