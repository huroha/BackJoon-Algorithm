#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int cur = 0;
    int dest = 0;
    int N = 0;
    cin >> cur >> dest >> N;

    vector<int> star;
    for (int i = 0; i < N; ++i)
    {
        int num = 0;
        cin >> num;
        star.push_back(num);
    }
    
    vector<int> result;
    result.push_back(abs(cur - dest));
    for (int i = 0; i < N; ++i)
    {
        result.push_back(abs(star[i] - dest));
    }

    sort(result.begin(), result.end());

    if (result[0] == abs(cur - dest))
        cout << abs(cur - dest);
    else
        cout << result[0] + 1;

}