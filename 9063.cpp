#include <iostream>

using namespace std;
// 9063번 대지
int main()
{
    int num;
    int x1=10000,x2= -10000,y1=10000,y2= -10000;
    cin >> num;
    for (int i=0; i<num; i++){
        int x,y;
        cin >> x >> y;
        if(x<=x1){
            x1 =x;
        }
        if(x>x2){
            x2 = x;
        }
        if(y <= y1){
            y1 = y;
        }
        if(y > y2){
            y2 = y;
        }
    }
    cout << (y2-y1)*(x2-x1);
    return 0;
}