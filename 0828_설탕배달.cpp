//#include <iostream>
//
//
//int main()
//{
//    std::cin.tie(nullptr);
//    std::ios_base::sync_with_stdio(false);
//    using namespace std;
//    int result =0;
//    int remain =0;
//    bool three = false;
//    int input=0;
//    
//    cin >> input;
//    if (input % 15 == 0)
//    {
//        cout << (input/15)*3;
//        return 0;
//    }
//    else if (input == 4 || input == 7)
//    {
//        cout << -1;
//        return 0;
//    }
//    else
//    {
//        if (input < 15)
//        {
//            input += 15;
//            three = true;
//        }
//        remain = (input / 15) - 1;   
//    }
//    int value = input - (remain*15) - 16;
//    int arr[15] = {4, 5, 4, 5, 4, 5, 6, 5, 6, 5, 6, 7, 6, 7, 6};
//
//    if (three)
//    {
//        result = remain * 3 + arr[value] -3;
//    }
//    else
//    {
//        result = remain * 3 + arr[value];
//    }
//    cout << result;
//}


#include <iostream>
#include <vector>
#include <string>
// 1436¹ø

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    using namespace std;

    int Check = 666;

    int Input = 0;
    cin >> Input;

    vector<int> result = {};
    result.reserve(10001);

    while (true)
    {
       
       string check_int = to_string(Check);
       int i =0;
 

       for (int i = 0; i < check_int.size() - 2; ++i)
       {

           if (check_int[check_int.size() - (i + 1)] == '6')
           {
               if (check_int[check_int.size() - (i + 2)] == '6')
               {
                   if (check_int[check_int.size() - (i + 3)] == '6')
                   {
                       result.push_back(Check);
                       break;
                   }
               }
           }

       }
       ++Check;

       if (result.size() == Input)
       {
           break;
       }

    }

    for (int i = 0; i < result.size(); ++i)
    {
        cout <<result[i]<<"\n";
    }
    //std::cout << result[Input-1];


}
























