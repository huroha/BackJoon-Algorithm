#include <iostream>
#include <vector>
#include <list>

struct tList
{
    int num;
    bool check;
};

int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int Case = 0;       // 출력할 갯수
    int listSize = 0;   // 리스트 사이즈 입력값
    int idx = 0;        // 목표 값 idx
    int inputnum = 0;   // 리스트 채우기 용
    int result =0;      // 출력할 결과값 -> 목표 idx가 몇번째 출력될건가?
    bool trigger = false;   // list 줄이기용
    
    vector<int> final = {};

    cin >> Case;
    for (int i = 0; i < Case; ++i)
    {
        // 프린트 큐 만들기
        tList t1;
        cin >>  listSize >> idx;
        list<tList> printq = {};
        for (int j = 0; j < listSize; ++j)
        {
            cin >> inputnum;
            t1.num = inputnum;
            if (j == idx)
            {
                t1.check = true;
            }
            else
            {
                t1.check = false;
            }

            printq.push_back(t1);

        }
       
        while (true)
        {
            list<tList>::iterator iter = printq.begin();
            int OutNum = iter->num;
            for (; iter != printq.end(); ++iter)
            {
                if (iter->num > OutNum)
                {
                    iter = printq.begin();
                    printq.push_back(*iter);
                    printq.pop_front();
                    trigger = true;
                    break;
                }
            }
            // 우선도가 높은애가 없으면
            if (!trigger)
            {
                ++result;
                iter = printq.begin();

                if (iter->check)
                {
                    break;
                }
                printq.pop_front();
               
            }
            trigger = false;
        }

        final.push_back(result);
        result =0;
    }

    for (int i = 0; i < final.size(); ++i)
    {
        cout << final[i] << "\n";
    }

}