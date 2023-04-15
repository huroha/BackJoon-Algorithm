#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;
// 2745번 진법 변환2
int main() {
       int num;
       int B;
       cin  >> num >>B;
       string binary = "";
       
       while (true) {                               
           char word;
           int remain = num%B;
           num = num/B;
           if (remain > 9) {                        // int -> char 변형
                word = char(remain+55);
           }
           else {
               word = char(remain+48);
           }
           binary+=word;
           if(num ==0){break;}              

       }
       reverse(binary.begin(),binary.end());        // 일의 자리부터 append 형식으로 저장했으므로 뒤집음
       cout << binary;
}