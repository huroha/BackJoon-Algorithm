#include <iostream>
using namespace std;
// 1085번 직사각형에서 탈출

// 난 멍청이다
int main() {
    int x,y,w,h;
    cin >> x >> y >> w >> h;

    
    int my_array[4] = {x,y,w-x,h-y};
    int result =1000;

    for (int i = 0; i < 4; i++) {
        if (my_array[i] <= result) {
            result = my_array[i];
        }
    }
    cout <<result;
    
    return 0;
}