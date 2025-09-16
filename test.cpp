#include <iostream>

int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);


   
    int result =0;

    for (int i = 0; i < 5; ++i)
    {
       int a =0;
       cin >> a;
       result += a*a;
    }
    result = result%10;
    cout << result;
}