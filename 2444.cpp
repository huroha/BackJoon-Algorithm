#include <iostream>
using namespace std;
// 별 찍기 -7
int main() {
    int count;
    cin >> count;
    
    int a=count-1;
    int n = 2 * (count - 1) - 1;
    for (int i = 0; i < count*2-1; i++) {
        for (int j=0; j<a; j++) {
            cout << " ";
        }
        if (i < count) {
            for (int k = 0; k < (i + 1) * 2 - 1; k++) {
                cout << "*";
            }
        }
        else {
            
            for (int m = n; m> 0; m--) {
                cout <<"*";
            }
            n-=2;
        }
        cout<< "\n";
        if (a > 0 && i < count) {
            a--;
        }
        else {
            a++;
        }

    }
    return 0;

}