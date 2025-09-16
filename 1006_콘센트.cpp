#include <iostream>

int main()
{
    using namespace std;
    
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int Case;

    cin >> Case;

    int result=0;
    for (int i = 0; i < Case; ++i)
    {
        int plug=0;

        cin >> plug;

        result += plug;
        if(i != Case-1)
            result--;

    }
    cout << result;
}