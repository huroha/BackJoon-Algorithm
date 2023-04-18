#include <iostream>

using namespace std;
// 1193 분수찾기
int main() {
       int num;
       cin >> num;
       int check =1;
       int flow_check=0;                  
       int num2 =num;                   
       while (num > 0) {                // 우상향 or 좌하향 판별
           num = num-check;
           flow_check++;
           check++;
       }
       
       check=0;
       for (int i = 0; i < flow_check; i++) {       //  우상향이거나 좌하향이거나에서 순번 찾기
            num2 -= check;
            check++;
       }
       

       if (flow_check % 2 != 0) {       // 우상향
           for (int i = 1; i < num2; i++) {
                flow_check-=1;
           }
           cout << flow_check<<"/"<<num2;
       }
       else {                           // 좌하향
           for (int i = 1; i < num2; i++) {
               flow_check -= 1;
           }
           cout << num2 << "/" << flow_check;
       }
       return 0;
}