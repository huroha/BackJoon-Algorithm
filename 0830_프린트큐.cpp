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

    int Case = 0;       // ����� ����
    int listSize = 0;   // ����Ʈ ������ �Է°�
    int idx = 0;        // ��ǥ �� idx
    int inputnum = 0;   // ����Ʈ ä��� ��
    int result =0;      // ����� ����� -> ��ǥ idx�� ���° ��µɰǰ�?
    bool trigger = false;   // list ���̱��
    
    vector<int> final = {};

    cin >> Case;
    for (int i = 0; i < Case; ++i)
    {
        // ����Ʈ ť �����
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
            // �켱���� �����ְ� ������
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