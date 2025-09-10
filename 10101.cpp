#include <iostream>

using namespace std;
// 10101번 삼각형 외우기
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int angle = a + b + c;
    if(angle == 180){
        if(a == 60 && b == 60 && c == 60){
        cout << "Equilateral";
        return 0;
        }
        if(a != b){
            if(a==c || b ==c){
                cout<<"Isosceles";
            }
            else{
                cout << "Scalene";
            }
        }
        else if(a != c){
            if(a==b || b ==c){
                cout<<"Isosceles";
            }
            else{
                cout << "Scalene";
            }
        }
        else{
            if(c != b){
                cout << "Scalene";
            }
            else{
                cout <<" Isosceles";
            }
        }
    }
    else{
        cout << "Error";
    }
    
    
    

    return 0;
}
