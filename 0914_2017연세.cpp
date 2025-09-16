#include <iostream>

int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    // 남규 +2 >= 영훈
    // 3명중 0개는 없음
    // 택희  홀수면 안됨
    // 분배하는 서로 다른 경우의 수

    int tek=2;

    int Candy =0;

    cin >>Candy;

    int i=1;
    int result =0;
   
 
    while(true)
    {
       int remain = Candy - tek*i;
       int young = 1;
       int nam = young + 2;
       if (Candy - tek * i < 4)
       {
           break;
       }

       while (remain >= young + nam)
       {
            ++young;
            nam = young+2;
            ++result;
       }
       ++i;

       

        
    }
    cout << result;
}