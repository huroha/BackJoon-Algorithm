#include <iostream>

int main()
{

    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);


    long long a, b, c;
    cin >> a >> b >> c;

    long long result1 = ((double)a / b) * c;
    long long result2 = (double)(a * b) / c;

    if (result1 > result2)
        cout << result1;
    else
        cout << result2;


}