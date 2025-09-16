#include <iostream>
#include <vector>
#include <string>
int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);


    int N =0;
    vector<int> result = {0,0,0,0,0,0,0,0,0,0};
    cin >> N;
    for (int i = 1; i < N+1; ++i)
    {
        string s = to_string(i);
        for (int j = 0; j < s.size(); ++j)
        {
            result[(s[j] - 48)] += 1;
        }
    }

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }

    // 321
    // 0은 10 20 30 40 50 60 70 80 90 100 110 120 130 140 150
    // 101~109 201~209 301~309  27개 + 32 + (100 200 300)
    // 
    // 1~121
    // 1의자리가 1인 수를 구하는 방법 
    // 1 (11) 21 31 41 51 61 71 81 91 101 111 121   -> (121/10 +1)
    
    // 10의자리가 1인 수를 구하는 방법 
    // 10 (11) 12 13 14 15 16 17 18 19 110 111 112 113 114 115 116 117 118 119 -> 20개
    // ((10~19)) (1210/100 +1)

    // 100의자리가 1인 수를 구하는 방법
    // 100~121 -> 22개
    // (121-100+1) * (천의 자리수+1)

    // 1000의자리가 1인 수를 구하는 방법
    // (1121 - 1000 +1)*(천의 자릿수+1);

}
//#include <iostream>
//
//int countOnes(int n) {
//    int count = 0;
//    int factor = 1; // 현재 자릿수 (1의 자리, 10의 자리, 100의 자리 등)
//
//    while (factor <= n) {
//        int lowerNumbers = n - (n / factor) * factor;
//        int currentDigit = (n / factor) % 10;
//        int higherNumbers = n / (factor * 10);
//
//        if (currentDigit == 0) {
//            count += higherNumbers * factor;
//        }
//        else if (currentDigit == 1) {
//            count += higherNumbers * factor + lowerNumbers + 1;
//        }
//        else {
//            count += (higherNumbers + 1) * factor;
//        }
//
//        factor *= 10;
//    }
//
//    return count;
//}
//
//int main() {
//    int n;
//    std::cout << "Enter the number: ";
//    std::cin >> n;
//
//    int result = countOnes(n);
//    std::cout << "The number of '1's from 1 to " << n << " is: " << result << std::endl;
//
//    return 0;
//}
