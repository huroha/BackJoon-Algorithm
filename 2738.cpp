#include <iostream>
using namespace std;
// 행렬 덧셈
int main() {
   int N,M;
   cin >> N>>M;

   // 행렬 첫번째
   int **my_array = new int*[N];
   for (int a = 0; a < N; a++) {
       my_array[a] = new int[M];
   }
   for (int i = 0; i < N; i++) {
       for (int j = 0; j < M; j++) {
            int num;
            cin >> num;
            my_array[i][j] = num;
       }
   }

   //행렬 두번째
   int **my_array2 = new int* [N];
   for (int a = 0; a < N; a++) {
       my_array2[a] = new int[M];
   }
   for (int i = 0; i < N; i++) {
       for (int j = 0; j < M; j++) {
           int num;
           cin >> num;
           my_array2[i][j] = num;
       }
   }

   // 행렬 세번째 -> 행렬 합산용
   int **my_array3 = new int* [N];
   for (int a = 0; a < N; a++) {
       my_array3[a] = new int[M];
   }
   for (int i = 0; i < N; i++) {
       for (int j = 0; j < M; j++) {
           
           my_array3[i][j] = my_array[i][j] + my_array2[i][j];
           cout << my_array3[i][j] << " ";

       }
       cout<<"\n";
   }
   

   for (int i = 0; i < N; i++) {
       delete[] my_array[i];
   }
   delete[] my_array;

   for (int i = 0; i < N; i++) {
       delete[] my_array2[i];
   }
   delete[] my_array2;

   for (int i = 0; i < N; i++) {
       delete[] my_array3[i];
   }
   delete[] my_array3;

}