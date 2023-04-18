#include <iostream>

using namespace std;
// 2903번 중앙 이동 알고리즘
int main() {
       int num;
       cin >> num;
       int result=0;
       int num2 = 2;
       for (int i = 0; i < num; i++) {      
            result = num2+ num2-1;      // 변에 있는 점 사이에 점 추가함
            num2 = result;
            
       }
       cout<< result*result;
       return 0;
}