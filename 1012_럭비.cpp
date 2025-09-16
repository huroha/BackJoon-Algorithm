#include <iostream>
#include <vector>
#include <string>
struct tClub
{
    std::string name;
    std::string team;
};
int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    vector<tClub> result;

    while (true)
    {
        string name;
        int a, b;
        tClub t1;
        cin >> name >> a >> b;
        if (name == "#")
            break;
        else
        {
            if (a > 17 || b >= 80)
            {
                string team = "Senior";
                t1.name = name;
                t1.team = team;
                result.push_back(t1);
            }
            else
            {
                string team = "Junior";
                t1.name = name;
                t1.team = team;
                result.push_back(t1);
            }
        }
    }
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i].name << " " << result[i].team << "\n";
    }

}