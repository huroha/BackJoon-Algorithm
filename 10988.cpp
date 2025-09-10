#include <iostream>
#include <string>
using namespace std;
// 팰린드롬인지 확인하기
int main() {
    string word;
    cin >> word;
    int check = 0;

   for (int i = 0; i < word.length() / 2; i++) {
       if (word[i] == word[word.length() - i - 1]) {
           continue;
       }
       else {
            cout<<0;
            return 0;
       }
   }
   cout << 1;
   return 0;

}
