#include <iostream>
using namespace std;
// 공 바꾸기
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n_basket, count;
    cin >> n_basket >> count;
    int* basket = new int[n_basket];

    for (int i = 0; i < n_basket; i++) {     // 바구니에 1~5까지 순서대로 들어감
        basket[i] = i + 1;
    }

    for (int i = 0; i < count; i++) {        // 바구니  순서 바꾸기
        int start, end;
        cin >> start >> end;
        int temp = basket[start - 1];
        basket[start - 1] = basket[end - 1];
        basket[end - 1] = temp;

        
    }
    for (int k = 0; k < n_basket; k++) {
        cout << basket[k] << " ";
    }
    delete[] basket;

    return 0;

}
