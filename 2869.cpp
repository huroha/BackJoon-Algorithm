#include <iostream>

using namespace std;
// 2869 달팽이는 올라가고 싶다
int main() {
    int a, b, goal;
    cin >> a >> b >> goal;

    int c= goal-a;

    if (c % (a - b) == 0) {
        cout << c / (a - b) + 1;
    }
    else {
        cout << c / (a-b) + 2;
    }
    return 0;
}