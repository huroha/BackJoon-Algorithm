#include <iostream>

using namespace std;
// 2536번 색종이
int main() {
   char paper[100][100] = {};
   int num;
   cin >> num;
   int result =0;
   for (int i = 0; i < num; i++) {              // 종이 겹치기
       int w,h;
       cin >> w >> h;
       for (int i = w; i < w + 10; i++) {
           for (int j = h; j < h + 10; j++) {
               paper[i][j] += 1;
           }
       }
   }
   for (int i = 0; i < 100; i++) {          // 겹친부분 넓이 구하기
       for (int j = 0; j < 100; j++) {
           if (paper[i][j] != '\0') {
                result +=1;
          }
       }
   }
   cout << result;
   return 0;
}