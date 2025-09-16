#include <iostream>
#include <vector>


int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);


    int col = 0;
    int row = 0;

    vector<char> Chess[50] = {};

    cin >> col >> row;

    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            char word;
            cin >> word;
            Chess[i].push_back(word);
        }
    }

    int result = 64;

    // 열 이동
    for (int l = 0; l < col - 7; ++l)
    {
        // 행 이동
        for (int k = 0; k < row - 7; ++k)
        {
            int Count = 0, Count2 = 0;

            // 8x8 블록 내부 검사
            for (int j = 0; j < 8; ++j)
            {
                for (int i = 0; i < 8; ++i)
                {
                    if ((i + j) % 2 == 0)
                    {
                        if (Chess[l + j][k + i] != 'B')
                        {
                            Count++;
                        }
                        if (Chess[l + j][k + i] != 'W')
                        {
                            Count2++;
                        }
                    }
                    else 
                    {
                        if (Chess[l + j][k + i] != 'W')
                        {
                            Count++;
                        }
                        if (Chess[l + j][k + i] != 'B')
                        {
                            Count2++;
                        }
                    }
                }
            }

            // 검사 후 최소 값을 업데이트
            if (Count < result)
            {
                result = Count;
            }
            if (Count2 < result)
            {
                result = Count2;
            }
        }
    }
    std::cout << result;
}



