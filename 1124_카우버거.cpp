#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> burger;
    vector<int> potato;
    vector<int> drink;
    vector<int> num;

    int b, p, d;
    cin >> b >> p >> d;

    num.push_back(b);
    num.push_back(p);
    num.push_back(d);

    int result1 =0;
    for (int i = 0; i < b; ++i)
    {
        int B=0;
        cin >> B;
        burger.push_back(B);
        result1 += B;
    }
    for (int i = 0; i < p; ++i)
    {
        int P = 0;
        cin >> P;
        potato.push_back(P);
        result1 += P;
    }
    for (int i = 0; i < d; ++i)
    {
        int D = 0;
        cin >> D;
        drink.push_back(D);
        result1 += D;
    }

    sort(num.begin(), num.end());
    sort(burger.begin(), burger.end());
    sort(potato.begin(), potato.end());
    sort(drink.begin(), drink.end());
    int result2 = 0;
    for (int i = 0; i < num[0]; ++i)
    {
        result2 += burger[b - (i + 1)] * 0.9;
        result2 += potato[p - (i + 1)] * 0.9;
        result2 += drink[d - (i + 1)] * 0.9;
    }

    for (int i = 0; i < burger.size() - num[0]; ++i)
    {
        result2 += burger[i];

    }
    for (int i = 0; i < potato.size() - num[0]; ++i)
    {

        result2 += potato[i];

    }
    for (int i = 0; i < drink.size() - num[0]; ++i)
    {
        result2 += drink[i];
    }

    cout << result1 << "\n" << result2;
}