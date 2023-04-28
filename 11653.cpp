#include <iostream>
using namespace std;
// 11653번 소인수분해

// 시간이 걸렸으니 나중에 최적화 함 해보자
int main() {
    int N;
    cin >> N;
    int i = 2;
    while (true) {
        
        if (N == 1) {       // 탈출 조건
            break;
        }
        if (N % i != 0) {           // 인수분해 과정
            i++;
        }
        else {
            N = N/i;
            cout << i<<endl;
        }
        
    }
    return 0;
}