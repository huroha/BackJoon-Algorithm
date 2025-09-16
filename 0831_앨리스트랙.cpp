#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int input =0;
    cin >> input;
    vector<char> result = {};
    for (int i = 0; i < input; ++i)
    {
        char a = {};
        cin >>a;
        result.push_back(a);
    }

    char r = {};
    cin >> r;
    int resultnum = 0;
    for (int i = 0; i < input; ++i)
    {
        if(r == result[i])
            ++resultnum;
    }
    cout << resultnum;

}