#include <iostream>
#include <vector>
struct sDonate
{
    long long kill;
    long long death;
    long long assit;
};

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        vector<sDonate> result;
        int mission;
        cin >> mission;
        for (int j = 0; j < mission; ++j)
        {
            sDonate s1;
            long long kill, death, assit;

            cin >> kill >> death >> assit;
            s1.kill = kill;
            s1.death = death;
            s1.assit = assit;
            result.push_back(s1);

        }
        int k, d, a;
        cin >> k >> d >> a;
        long long money = 0;
        for (int l = 0; l < result.size(); ++l)
        {
            long long sum = result[l].kill * k - result[l].death * d + result[l].assit * a;
            if (sum > 0)
                money += sum;
        }
        cout << money << "\n";
    }
}