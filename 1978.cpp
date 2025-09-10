#include <iostream>
using namespace std;
// 1978번 소수 찾기
int main() {
    int N;
    cin >> N;
    int count=0;
    for (int i = 0; i < N; i++) {
        bool isPrime = true;
        int num;
        cin >> num;
        if (num < 2) {
            continue;
        }
        for (int j = 2; j < num; j++) {     // 소수 찾기
            if (num % j == 0) {
                isPrime=false;
            }
        }
        if (isPrime) {              // 소수면 count 증가
            count++;
        }
    }
    cout << count;
    return 0;
}