#include <iostream>


int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int a,b,c;

    cin >> a >> b >> c;

    // 8가지 경우수
    
    if (a == b + c)
    {
        cout << a <<"="<<b<<"+"<<c;
    }
    else if (a == b - c)
    {
        cout << a << "=" << b << "-" << c;
    }
    else if(a == b /c)
    {
        cout << a << "=" << b << "/" << c;
    }
    else if (a == b * c)
    {
        cout << a << "=" << b << "*" << c;
    }
    else if (a + b == c)
    {
        cout << a <<"+"<<b<<"="<<c;
    }
    else if (a - b == c)
    {
        cout << a << "-" << b << "=" << c;
    }
    else if (a / b == c)
    {
        cout << a << "/" << b << "=" << c;
    }
    else if (a * b == c)
    {
        cout << a << "*" << b << "=" << c;
    }



}