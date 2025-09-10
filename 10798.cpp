#include <iostream>

using namespace std;
//세로읽기
int main() {
    char words[5][16] ={};  
   

    // 다섯 개의 단어를 입력받아 배열에 저장
    for (int i = 0; i < 5; i++) {
        cin >> words[i];
    }

    // 세로로 읽어서 출력
    for (int i = 0; i < 15; i++) {  // 최대 길이가 15이므로 15번 반복
        for (int j = 0; j < 5; j++) {
            if (words[j][i] != 0) {  // 해당 위치에 글자가 있는 경우에만 출력
                cout << words[j][i];
            }
        }
    }

    return 0;
}
