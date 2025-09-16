#include <iostream>
#include <set>
#include <string>
#include <vector>
int main()
{
    
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    set<string> see = {};
    set<string>::iterator iter;

    vector<string> hear = {};
    set<string> result2 = {};

    int input1=0, input2 =0;
    int count = 0;
    cin >> input1 >> input2;
    
    for (int i = 0; i < input1; ++i)
    {
        string s1 = {};
        cin >> s1;
        see.insert(s1);
    }
    for (int i = 0; i < input2; ++i)
    {
        string s1 = {};
        cin >> s1;
        hear.push_back(s1);
    }

    for (int i = 0; i < hear.size(); ++i)
    {
        iter = see.find(hear[i]);
        if (iter != see.end())
        {
            ++count;
            result2.insert(hear[i]);
        }
    }

    cout << count << "\n";
    
    for (iter=result2.begin(); iter != result2.end(); ++iter)
    {
        cout << *iter <<"\n";
    }
}