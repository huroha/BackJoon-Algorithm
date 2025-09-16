#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N = 0;
    cin >> N;

    int result1 = 0;
    vector<int> result2;
    map<int,int>result3;
    map<int, int>::iterator myiter;


    for (int i = 0; i < N; ++i)
    {
        int input = 0;
        cin >> input;

        result1 += input;
        result2.push_back(input);
        auto iter = result3.insert(make_pair(input, 0));
        if (!iter.second)
        {
            myiter = result3.find(input);
            myiter->second += 1;
        }


    }
    int avg = (int)floor(((float)result1 / (float)N)+ 0.5f);
    sort(result2.begin(), result2.end());
    int middle = result2[N / 2];

    int check = 0;
    for (myiter = result3.begin(); myiter != result3.end(); ++myiter)
    {
        if (myiter->second >= check)
            check = myiter->second;
    }

    vector<int> many;
    for (myiter = result3.begin(); myiter != result3.end(); ++myiter)
    {
        if (myiter->second == check)
            many.push_back(myiter->first);
    }
    int rfinal = 0;
    //sort(many.begin(), many.end());
    if (many.size() > 1)
    {
        rfinal = many[1];
    }
    else
        rfinal = many[0];

    int range = result2[result2.size() - 1] - result2[0];

    cout << avg << "\n";
    cout << middle << "\n";
    cout << rfinal << "\n";
    cout << range << "\n";

}