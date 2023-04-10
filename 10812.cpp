#include <iostream>

using namespace std;
// 바구니 순서 바꾸기
int main() {
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int basket, count;
   cin >> basket >> count;

   int* array = new int[basket];
   int* array2 = new int[basket];

   for (int i = 0; i < basket; i++) {
        array[i] = i+1;
        array2[i] = i+1;
   }

   for (int i = 0; i < count; i++) {
       int begin,end,mid;
       cin >> begin >> end >> mid;
       for (int i = begin-1; i < end; i++) {
            array2[i] =array[mid-1];
            if (mid > end) {
                array2[i] = array[begin-1];
                begin++;
            }
            mid++;
       }
       for (int i = 0; i < basket; i++) {
           array[i] = array2[i];
       }
   }

   for (int i = 0; i < basket; i++) {
        cout<< array2[i] << " ";
   }


   delete[] array;
   delete[] array2;
   return 0;

}