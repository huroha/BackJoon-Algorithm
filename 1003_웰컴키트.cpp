#include <iostream>
#include <vector>
int main()
{
    using namespace std;

    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    // 펜은 나누기 + 나머지로

    int People=0;
    cin >> People;

    vector<int> tsize;
    for (int i = 0; i < 6; ++i)
    {
        int num=0;
        cin >> num;
        tsize.push_back(num);
    }
    int T=0,P=0;
    cin >> T >>P;

    long long resultT=0;

    for (int i = 0; i < 6; ++i)
    {
        if (tsize[i] != 0)
        {
            if (tsize[i] % T != 0)
                resultT += ((tsize[i] / T) + 1);
            else
                resultT += tsize[i] / T;
        }
       
    }

    cout << resultT << "\n";
    cout << People/P << " " << People%P;

}