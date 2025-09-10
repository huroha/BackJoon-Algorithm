#include <iostream>
#include <string>
using namespace std;
// 10757번 큰 수 더하기
int main() {
    string a,b;
    cin >> a >> b;
    string result ="";
    int i = a.length()-1;
    int j = b.length()-1;
    int carry =0;
    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        // 자리수 합이 10 이상이면 올림값 발생
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        }
        else {
            carry = 0;
        }
     result = to_string(sum) + result;
     }
     if (carry == 1) {
         result = "1" + result;
     }
     cout << result;
    return 0;
}