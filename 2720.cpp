#include <iostream>

using namespace std;
// 2720번 세탁소 사장 동혁
int main() {
       cin.tie(NULL);
       ios_base::sync_with_stdio(false);

       int quarter=0,dime=0,nickel=0,penny=0;
       int num;
       cin >> num;
       for (int i = 0; i < num; i++) {
            int money;
            cin >> money;
            quarter = money/25;
            dime = (money%25)/10;
            nickel = ((money % 25) % 10)/5;
            penny = (((money % 25) % 10) % 5);

            cout << quarter <<" " << dime << " " << nickel << " " << penny<<endl;
       }
       return 0;
}