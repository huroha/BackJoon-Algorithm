#include <iostream>

int main()
{
    using namespace std;   
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int dp[12] = {};
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    int input = 0,input2 =0;
    cin >> input;
    for (int i = 0; i < input; ++i)
    {
        cin >> input2;
        for (int j = 3; j < input2; ++j)
        {
            dp[j] = dp[j-3] + dp[j-2] + dp[j-1];
        }
        if(input2 == 0)
            cout<< 0 <<"\n";
        else
            cout << dp[input2-1]<<"\n";
    }

}


