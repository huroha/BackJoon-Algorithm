#include <iostream>

using namespace std;
// 2차원 배열 최댓값
int main() {
   cin.tie(NULL);
   ios_base::sync_with_stdio(false);

   int max_num=0;
   int r=0,c =0;

   int ** array = new int*[9];
   for (int i = 0; i < 9; i++) {
        array[i] = new int[9];
   }

   for (int i = 0; i < 9; i++) {
       for (int j = 0; j < 9; j++) {
           int num;
           cin >> num;
           array[i][j] = num;
           if (num >= max_num) {
               max_num = num;
               r = i;
               c= j;
           }
       }
   }
   cout << max_num <<endl;
   cout << r+1 << " " << c+1;

   // 메모리 해제
   for (int i = 0; i < 9; i++){     
       delete[] array[i];
   }
   delete[] array;
   return 0;

}