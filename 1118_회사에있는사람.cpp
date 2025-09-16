#include <iostream>
#include <set>
#include <string>

int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);


    set<string> company;

    int num = 0;
    cin >> num;

    set<string>::iterator iter;
    for (int i = 0; i < num; ++i)
    {
        string name;
        cin >> name;
        
        company.insert(name);
        string inout;
        cin >> inout;
        
        if (inout == "leave")
        {
            iter =company.find(name);
            company.erase(iter);
        }
        
    }
    set<string>::reverse_iterator riter = company.rbegin();
    for (riter; riter != company.rend(); ++riter)
    {
        cout << *riter << "\n";
    }

}