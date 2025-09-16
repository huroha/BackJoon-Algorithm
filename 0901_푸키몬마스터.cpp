#include <iostream>
#include <string>
#include <vector>
#include <map>


struct tPokemon
{
    std::string name;
    int id;
};

int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    vector<tPokemon> Dex = {};
    map<string,int> Dex2 = {};

    vector<string> result ={};

    int CaseNum =0, Solve =0;

    cin >> CaseNum>>Solve;

    for (int i = 0; i < CaseNum; ++i)
    {
        tPokemon c ={};
        cin >> c.name;
        c.id = i+1;
        Dex.push_back(c);
        Dex2.insert(make_pair(c.name,c.id));
    }
 




    for (int i = 0; i < Solve; ++i)
    {
        string temp = {};
        cin >> temp;
        int check = (temp[0]-48);

        
        if (check > 9)
        {
            temp = to_string(Dex2.find(temp)->second);
            result.push_back(temp);
        }
        else
        {
            int a = stoi(temp)-1;
            temp = (Dex[a].name);
            result.push_back(temp);
        }


    }


    
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << "\n";
    }

}