#include <iostream>

int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    

    int input = 0;
    int min =0, max =0;

    // 끼니는 최대한 많이
    // 남기는건 최대한 적게
    int eatcount =0;
    int remain = 0;

    cin >> input >> min >> max;


    for (int i = 0; i < input; ++i)
    {
        int Sand = 0;
        cin >> Sand;
        
        // 2끼니 이상을 때울수 있을만큼 크다면
        if(Sand >= 2*min)
        {
            int CheckRemain = 0;

            // 최소로 잘라먹고 남았을때 남은 양
            CheckRemain = Sand%min;
            // 몇번 잘라먹을 수 있는데
            int SliceCount = Sand / min;

            // 최대한 소모할 수 있는 식량
            int MaxRemain = (max - min) * SliceCount;
            CheckRemain -= MaxRemain;

            // 최대한 소모하고 남은 양이 있다면 남김
            if (CheckRemain > 0)
            {
                remain += CheckRemain;
            }
            eatcount += SliceCount;
                

        }

        // 한끼만 먹어야함
        else
        {
            // 근데 min보다 작으면 안먹어
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