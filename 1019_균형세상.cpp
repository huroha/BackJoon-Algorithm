#include <iostream>
#include <stack>
#include <string>
int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    stack<char> s2;


    while (true)
    {
        stack<char> s1;
        bool noCheck = false;
        string input;
        getline(cin, input);

        if (input.size() == 1 && input[0] == '.')
            break;

        for (int i = 0; i < input.size(); ++i)
        {
            if (input[i] == '(' || input[i] == '[')
                s1.push(input[i]);



            else if (input[i] == ')')
            {
                if (s1.size() != 0)
                {
                    char check = s1.top();
                    if (check != '(')
                    {
                        cout << "no\n";
                        noCheck = true;
                        break;
                    }
                    s1.pop();
                }
                else
                {
                    cout << "no\n";
                    noCheck = true;
                    break;
                }


            }
            else if (input[i] == ']')
            {
                if (s1.size() != 0)
                {
                    char check = s1.top();
                    if (check != '[')
                    {
                        cout << "no\n";
                        noCheck = true;
                        break;
                    }
                    s1.pop();
                }
                else
                {
                    cout << "no\n";
                    noCheck = true;
                    break;
                }

            }
        }

        if (s1.empty() && !noCheck)
            cout << "yes\n";
        else if (!s1.empty() && !noCheck)
            cout << "no\n";


    }



}