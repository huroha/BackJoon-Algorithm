#include <iostream>

int main()
{


    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

       
    // ���� �ϼ� / �ڶ�µ� �ɸ��� �� �� / ���� �� �ִ� ĭ �� / �ĸ��� ����

    int day=0, grow =0, soil =0, price =0;

    int count =0;
    cin >> day >> grow >>soil >> price;
    int cday = 1;
    while (cday <= day-grow)
    {
        ++count;
        cday += grow;
    }
    cout << soil*price*count;
}