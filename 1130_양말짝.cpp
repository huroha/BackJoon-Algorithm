#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int arr[10] = {};

    for (int i = 0; i < 5; ++i)
    {
        int num = 0;
        cin >> num;
        arr[num] += 1;
    }
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] != 0 && arr[i] % 2 != 0)
            cout << i;
    }
}