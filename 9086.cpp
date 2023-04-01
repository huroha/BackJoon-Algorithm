#include <iostream>
#include <cstring>
using namespace std;
// 문자열
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int count;
    cin >> count;
    for (int i = 0; i < count; i++) {
        string word;
        cin >> word;
        cout << word[0] << word[word.length()-1] <<endl;
    }
    

    return 0;

}