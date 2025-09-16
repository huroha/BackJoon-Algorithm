#include <iostream>
#include <vector>
int main()
{

    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> car;
    int num = 0;
    cin >> num;
    for (int i = 0; i < 5; ++i)
    {
        int carnum = 0;
        cin >> carnum;
        car.push_back(carnum);
    }

    int result = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (car[i] == num)
            result++;
    }
    cout << result;
}