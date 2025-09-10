#include <iostream>
#include <vector>
#include <string>


int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1;

    cin >> s1;

    //48 빼면 됨

    vector<int> num;
    vector<char> mark;

    string to_num;
    for (int i = 0; i < s1.size(); ++i)
    {
        int a = s1[i];
        if (a >= 48)
        {

            to_num.push_back(a);
        }
        else
        {
            mark.push_back(s1[i]);
            int num2 = stoi(to_num);
            num.push_back(num2);
            to_num = "";
        }


    }
    int num3 = stoi(to_num);
    num.push_back(num3);
    
    // 그냥 - 뒤에 나오는 + 전부 -로 만들면 그게 가장 작은수임. 괄호 갯수제한 없네
    bool check = false;
    for (int i = 0; i < mark.size(); ++i)
    {
        if (mark[i] == '-')
        {
            check = true;
        }
        else if (mark[i] == '+' && check)
        {
            mark[i] = '-';
        }
    }


    int result = num[0];
    for (int i = 0; i < mark.size(); ++i)
    {
        if (mark[i] == '+')
        {
            result += num[i + 1];
        }
        else
        {
            result -= num[i + 1];
        }

    }

    cout << result;






}