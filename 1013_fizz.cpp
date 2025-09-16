#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;
    // 48 ~ 57 ÀÌ ¼ýÀÚ
    int result = 0;
    if (s1[0] > 47 && s1[0] < 58)
        result = stoi(s1) + 3;
    else if(s2[0] > 47 && s2[0] < 58)
        result = stoi(s2) + 2;
    else if(s3[0] > 47 && s3[0] < 58)
        result = stoi(s3) + 1;


   
    if (result % 5 == 0 && result % 3 == 0)
        cout << "FizzBuzz";
    else if (result % 3 == 0 && result % 5 != 0)
        cout << "Fizz";
    else if (result % 3 != 0 && result % 5 == 0)
        cout << "Buzz";
    else
        cout << result;
}