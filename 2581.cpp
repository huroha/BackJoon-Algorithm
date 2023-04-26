#include <iostream>
using namespace std;
// 2581번 소수 
bool prime_num(int a) {     // 소수인지 구별 함
    int i=2;
    if (a < 2) {
        return false;
    }
    while (i * i <= a) {
        if (a % i == 0) {
            return false;
        }
        i += 1;
     }
    return true;
    
}

int main() {
    int M,N;
    cin >> M >> N;
    int result =0;
    bool min_check =true;
    int min_num=0;
    for (int i = M; i < N + 1; i++) {
        if (prime_num(i)) {                 // 소수 체크
            if (min_check) {                // 최솟값 저장
                min_num += i;
            }
            min_check = false;          
            result +=i;                             // 소수면 값을 더함
        }

    }

    if (result == 0) {                                  // 출력
        cout<< -1;
    }
    else {
        cout << result << "\n" << min_num;
    }
    return 0;
}