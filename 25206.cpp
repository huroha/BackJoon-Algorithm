#include <iostream>
#include<string>
using namespace std;
// 너의 평점은
int main() {
   string subject,grade;
   float credit;

   float total_grade=0;
   float total_credit=0;
   float result =0;
   for (int i = 0; i < 20; i++) {
       cin >> subject >> credit >> grade;

       switch (grade[0]) {
            case 'A':
                if (grade[1] == '+') {
                    total_grade += 4.5*credit;
            }
                else {
                    total_grade += 4.0*credit;
                }
                break;
            case 'B':
                if (grade[1] == '+') {
                    total_grade += 3.5*credit;
                }
                else {
                    total_grade += 3.0 * credit;
                }
                break;
            case 'C':
                if (grade[1] == '+') {
                    total_grade += 2.5 * credit;
                }
                else {
                    total_grade += 2.0 * credit;
                }
                break;
            case 'D':
                if (grade[1] == '+') {
                    total_grade += 1.5 * credit;
                }
                else {
                    total_grade += 1.0 * credit;
                }
                break;
            default:
                break;
       }
       if (grade[0] != 'P') {

           switch (int(credit)) {
            case 4:
                total_credit += 4.0;
                break;
            case 3:
                total_credit += 3.0;
                break;
            case 2:
                total_credit +=2.0;
                break;
            case 1:
                total_credit += 1.0;
                break;
            
       }
       }
   }
   result = total_grade/total_credit;
   cout.precision(7);
   cout<< result;
   return 0;

}
