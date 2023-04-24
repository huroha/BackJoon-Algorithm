#include <iostream>

using namespace std;

int main()
{
    int N,K;
    cin >> N >> K;
    int num=0;
    int array[N] = {};
    for (int i=1; i<N+1;i++){
        if(N%i == 0){
            array[num] = i;
            num++;
        }
    }
    cout << array[K-1];
    return 0;
}