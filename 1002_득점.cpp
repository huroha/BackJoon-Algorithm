#include <iostream>

int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int add,minus,result1,result2;
    cin >> add >> minus;

    if( add < minus)
        cout << -1;
    else
    {
        result1 = (add + minus) /2;
        result2 = (add - minus) /2;
        if(result1 + result2 == add && result1 - result2 == minus)
            cout << result1 << " " << result2;
        else
            cout << -1;
    }
}