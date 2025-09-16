#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    //long long input = 0;
   
    //// 1111 1111 1111 1111  / 1111 1111 1111 1111
    //int check = 65535;

    ////0110 0100
    ////0001 1001

    // 1~4까지 0
    // 5~9까지 1
    // 10~14까지 2
    // 15~19까지 3
    // 20~24까지 4
    // 25~29까지 6
    // 30~34까지 7
    // 35~39까지 8


    int input =0;
    int input2 = 0;
    int result =0;
    int result2 =0;

    cin >> input >> input2;
  while (true)
  {
      if (input % 5 == 0)
      {
          if ((input % 25) == 0)
          {
              if ((input % 125) == 0)
              {
                  result +=3;
                  --input;
                  continue;
              }
              result +=2;
              --input;
              continue;
          }
          ++result;
      }
      --input;
      if (input == 0)
      {
          break;
      }
  }

    // 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100
    // 1  2  3  4  6 7  8  9  10 12 13 14 15 16 18 19 20 21 22 24
    // 105 110 115 120 125 130 135 140 145 150 155 160 165 170 175 180 185 190 195 200
    //if (input < 25)
    //{
    //   result = input/5;
    //}
    //else if (input < 50)
    //{
    //    result = input/5 +1;
    //}
    //else if (input < 75)
    //{
    //    result = input/5 +2;
    //}
    //else if (input < 100)
    //{
    //    result = input/5 +3;
    //}
    //else if (input < 125)
    //{
    //    result = input/5 +4;
    //}
    //else if (input < 150)
    //{
    //    result = input/5 +6;
    //}
    int i = 1;
    int j = 1;

    while (true)
    {

      if (input2 < 25 * i)
      {
           if (input2 / 125 > 0)
           {
              int a = input2 /125;
              result2 = input2 /5 + i + a-1;
              break;
           }
           else
           {
               result2 = input2 / 5 + (i - 1);
               break;
           }
         
      }
     ++i;
    }

   
   
    cout <<result << "\n" <<result2;

}
