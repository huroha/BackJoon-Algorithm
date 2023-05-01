#include <iostream>
using namespace std;
// 3009번 네 번째 점


int main() {
    int x_array[3] ={};
    int y_array[3] = {};
    int x_check[1001] = {};
    int y_check[1001] = {};
    int check =0;
    int x,y;
    for (int i = 0; i < 3; i++) {
        int x,y;
        cin >> x >> y;
        x_array[check] = x;
        y_array[check] = y;
        check++;

    }

    for (int i = 0; i < 3; i++) {
        x_check[x_array[i]] += 1;
        y_check[y_array[i]] += 1;
    }

    for (int i = 0; i < 1000; i++) {
        if (x_check[i] % 2 != 0) {
            x= i;
        }
        if (y_check[i] % 2 != 0) {
            y =i;
        }
    }
    cout << x << " " << y;

    return 0;
}