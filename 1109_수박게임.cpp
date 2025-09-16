#include <iostream>
#include <math.h>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, cherry;
    cin >> N >> cherry;

    long long melon = pow(2, N-1);

    cout <<cherry / melon;

    

}