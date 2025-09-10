#include <iostream>

using namespace std;

int main()
{
    int N;
    
    while(true){
        int result=0;
        cin >> N;
        if(N == -1){
            break;
        }
        int array[N] = {};
        int num=0;
        for (int i=1; i<N+1;i++){
            if(N%i == 0){
                array[num] = i;
                num++;
            }
        }
        for(int j=0;j<N; j++){
            if(array[j]!=0){
                result += array[j];
                
            }
        }
        result -= N;
        if(result == N){
            cout << N << " = ";
            for(int k= 0; k<num; k++){
                cout << array[k];
                if(array[k+1]== N){
                    cout<<endl;
                    break;
                }
                cout << " + ";
            }
        }
        else{
            cout << N << " is NOT perfect."<<endl;
        }
        
            
        
    }
    
    return 0;
}