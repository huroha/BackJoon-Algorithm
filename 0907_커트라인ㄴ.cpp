#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int Case =0,cut =0;

    cin >> Case >> cut;
    vector<int> result ={};
    for (int i = 0; i < Case; ++i)
    {
        int score =0;
        cin >> score;
        result.push_back(score);

    }

    sort(result.begin(),result.end());


    cout << result[result.size()-cut];


}