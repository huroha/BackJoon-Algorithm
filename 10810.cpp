#include <iostream>
using namespace std;
// 공 넣기
int main() {
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int n_basket,count;
   cin >> n_basket >> count;
   int* basket = new int[n_basket];
   std::fill(basket, basket + n_basket, 0);
   for (int i = 0; i < count; i++) {
       int start,end,num;
       cin >> start >> end>>num;
       for (int i = start-1; i < end; i++) {
           basket[i] = num;
       }
   }
   for (int i = 0; i < n_basket; i++) {
       cout << basket[i] << " ";
   }
   

   delete[] basket;

   return 0;

}