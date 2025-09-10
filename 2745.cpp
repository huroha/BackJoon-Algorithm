#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
// 2745번 진법 변환
int main() {
       int num;
       string B;
       cin >> B >> num;
       int result=0;

       for (int i = 0; i < B.length(); i++) {
            int check = int(B[i])-55;       // 알파벳 숫자변환
            if (check < 3) {               // string 숫자 -> int 숫자 변환
                check +=7;
            }
            result += check*pow(num,B.length()-(i+1));     // 계산
       }
       cout << result;
}