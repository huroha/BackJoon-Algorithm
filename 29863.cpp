#include <iostream>

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    using namespace std;


    int sleep = 0, awake = 0;
    cin >> sleep >> awake;

    if (sleep > 19)
    {
        int result = 24-sleep + awake;
        cout << result;
    }
    else
    {
        int result = awake - sleep;
        cout << result;
    }
    

}