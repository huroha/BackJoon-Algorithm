#include <iostream>

int main()
{


    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

       
    // 여름 일수 / 자라는데 걸리는 일 수 / 심을 수 있는 칸 수 / 후르츠 가격

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