#include <iostream>
#include <map>

int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    map<int,string> drink = {};

    int Case =0;
    cin >>Case;
    for (int i = 0; i < Case; ++i)
    {
        int School =0;
        cin >> School;
        map<int, string> drink = {};
        for (int j = 0; j < School; ++j)
        {
            string name = {};
            cin >> name;
            int liter =0;
            cin >>liter;

            drink.insert(make_pair(liter,name));

        }
        cout << prev(drink.end())->second <<"\n";
    }

}