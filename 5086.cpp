#include <iostream>
using namespace std;
// 5086번 배수와 약수
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a,b;
    while (true) {
        cin >> a >> b; 

        if (a == 0 && b == 0) {
            break;
        }
        if (a >= b) {
            if (a % b == 0) {       // a가 b의 배수인 경우
                cout<< "multiple"<<endl;
            }
            else {
                cout << "neither"<<endl;
            }
        }
        else {
            if (b % a == 0) {       // b가 a의 배수인 경우
                cout << "factor" <<endl;
            }
            else {
                cout << "neither" << endl;
            }
        }

    }
    return 0;
}