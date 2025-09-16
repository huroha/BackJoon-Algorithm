#include <iostream>


int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int petty=0, cheeze=0;
    // petty = cheeze +1;
    int result=0;
    cin >> petty >> cheeze;
    
    for (int i = 0; i < petty-1; ++i)
    {
        if(cheeze == 0)
            break;
        --cheeze;
        result++;
    }
    cout << result*2+1;
}