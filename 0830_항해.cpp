#include <iostream>

int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    

    int input = 0;
    int min =0, max =0;

    // ���ϴ� �ִ��� ����
    // ����°� �ִ��� ����
    int eatcount =0;
    int remain = 0;

    cin >> input >> min >> max;


    for (int i = 0; i < input; ++i)
    {
        int Sand = 0;
        cin >> Sand;
        
        // 2���� �̻��� ����� ������ŭ ũ�ٸ�
        if(Sand >= 2*min)
        {
            int CheckRemain = 0;

            // �ּҷ� �߶�԰� �������� ���� ��
            CheckRemain = Sand%min;
            // ��� �߶���� �� �ִµ�
            int SliceCount = Sand / min;

            // �ִ��� �Ҹ��� �� �ִ� �ķ�
            int MaxRemain = (max - min) * SliceCount;
            CheckRemain -= MaxRemain;

            // �ִ��� �Ҹ��ϰ� ���� ���� �ִٸ� ����
            if (CheckRemain > 0)
            {
                remain += CheckRemain;
            }
            eatcount += SliceCount;
                

        }

        // �ѳ��� �Ծ����
        else
        {
            // �ٵ� min���� ������ �ȸԾ�
            if (Sand >= min)
            {
                int temp = Sand - max;
                if (temp > 0)
                {
                    remain += temp;
                }
                ++eatcount;
            }
            else
            {
                remain += Sand;
            }
        }

    }

    cout << eatcount << "\n" << remain;
}