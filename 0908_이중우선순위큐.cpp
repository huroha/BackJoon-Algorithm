#include <iostream>
#include <queue>
#include <string>
#include <set>
int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    //priority_queue<int, vector<int>, greater<int>> lowQ;
    //priority_queue<int> highQ;

    multiset<int> Mq ={};
    multiset<int>::iterator iter;
    int Case =0;

    cin >> Case;

    for (int i = 0; i < Case; ++i)
    {
        int QSize = 0;
        cin >> QSize;
        for (int i = 0; i < QSize; ++i)
        {
            char func;
            long long num = 0;
            cin >> func >> num;

            // 큐에 집어넣기
            if (func == 'I')
            {
                Mq.insert(num);
            }
            // 큐에서 빼기
            else
            {

                // 큐가 비어있지 않을 경우만
                if (Mq.size() != 0)
                {
                    // 최대값 빼기
                    if (num == 1)
                    {
                        iter = Mq.end();
                        --iter;
                        Mq.erase(iter);
                    }
                    // 최솟값 빼기
                    else
                    {
                        iter = Mq.begin();
                        Mq.erase(iter);
                    }
                }
               
            }
        }
        iter = Mq.end();
        if (Mq.size() != 0)
        {
            --iter;
            cout << *iter << " " << *Mq.begin() <<"\n";
        }
        else
        {
            cout << "EMPTY" << "\n";
        }


        
    }
    
    

}

//#include <iostream>
//#include <queue>
//#include <string>
//#include <set>
//
//int main() {
//    using namespace std;
//    cin.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int Case;
//    cin >> Case;
//
//    for (int i = 0; i < Case; ++i) {
//        int QSize;
//        cin >> QSize;
//        multiset<int> Mq;
//
//        for (int j = 0; j < QSize; ++j) {
//            char func;
//            long long num;
//            cin >> func >> num;
//
//            if (func == 'I') {
//                Mq.insert(num); // 값 삽입
//            }
//            else if (!Mq.empty()) {
//                if (num == 1) { // 최대값 삭제
//                    Mq.erase(prev(Mq.end()));
//                }
//                else { // 최소값 삭제
//                    Mq.erase(Mq.begin());
//                }
//            }
//        }
//
//        if (!Mq.empty()) {
//            cout << *prev(Mq.end()) << " " << *Mq.begin() << "\n"; // 최대값과 최소값 출력
//        }
//        else {
//            cout << "EMPTY\n";
//        }
//    }
//    return 0;
//}