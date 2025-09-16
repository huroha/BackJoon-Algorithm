#include <iostream>
#include <string>
#include <set>
int main()
{
    using namespace std;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    
    string a1 = "Never gonna give you up", a2 ="Never gonna let you down", a3 = "Never gonna run around and desert you"
               , a4 = "Never gonna make you cry", a5 = "Never gonna say goodbye" ,a6 = "Never gonna tell a lie and hurt you"
               , a7 = "Never gonna stop";

    set<string> result = {};
    result.insert(a1);
    result.insert(a2);
    result.insert(a3);
    result.insert(a4);
    result.insert(a5);
    result.insert(a6);
    result.insert(a7);

    set<string>::iterator iter = result.begin();
    bool Check = false;

    int input =0;
    cin >> input;
    cin.ignore();
    for (int i = 0; i < input; ++i)
    {
        string b1;
        
        getline(cin,b1);


    

        iter = result.find(b1);
        
        if (iter == result.end())
        {
            Check = true;
        }
    }
    if (Check)
    {
        cout << "Yes";
    }
    else {
        cout <<"No";
    }

}