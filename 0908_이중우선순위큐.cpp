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

            // ť�� ����ֱ�
            if (func == 'I')
            {
                Mq.insert(num);
            }
            // ť���� ����
            else
            {

                // ť�� ������� ���� ��츸
                if (Mq.size() != 0)
                {
                    // �ִ밪 ����
                    if (num == 1)
                    {
                        iter = Mq.end();
                        --iter;
                        Mq.erase(iter);
                    }
                    // �ּڰ� ����
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
//                Mq.insert(num); // �� ����
//            }
//            else if (!Mq.empty()) {
//                if (num == 1) { // �ִ밪 ����
//                    Mq.erase(prev(Mq.end()));
//                }
//                else { // �ּҰ� ����
//                    Mq.erase(Mq.begin());
//                }
//            }
//        }
//
//        if (!Mq.empty()) {
//            cout << *prev(Mq.end()) << " " << *Mq.begin() << "\n"; // �ִ밪�� �ּҰ� ���
//        }
//        else {
//            cout << "EMPTY\n";
//        }
//    }
//    return 0;
//}