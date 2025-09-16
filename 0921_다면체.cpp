#include <iostream>


int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int Case=0;
    
    cin >> Case;

    for (int i = 0; i < Case; ++i)
    {
        int V=0,E=0;
        cin >> V >> E;

        cout << E-V+2 <<"\n";


    }


}