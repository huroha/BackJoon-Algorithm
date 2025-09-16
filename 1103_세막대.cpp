#include <iostream>
#include <algorithm>
#include <vector>
int main()
{


    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    vector<int> result;
    result.push_back(a);
    result.push_back(b);
    result.push_back(c);

    sort(result.begin(), result.end());

    if(result[2] >= result[0] + result[1])
        result[2] = result[0] + result[1] - 1;

    cout << result[0] + result[1] + result[2];
    

}