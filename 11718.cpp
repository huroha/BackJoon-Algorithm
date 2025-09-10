#include <iostream>
#include <string>
using namespace std;
// 그대로 출력하기
int main() {

    string word;
    while (true) {
        getline(cin, word);
        if (word == "") {
            break;
        }
        cout << word<<endl;
    }

    return 0;

}
