#include <iostream>
#include <vector>

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    using namespace std;

    int width =0, height =0, area =0;

    vector<int> vecResult1 = {};
    vector<int> vecResult2 = {};
    vector<int> vecResult3 = {};

    while (true)
    {
        cin >>width >>height>>area;

        // ���� ���ϱ�
        if (width == 0 && height != 0 && area!=0)
        {
            width = area / height;  
        }
        // ���� ���ϱ�
        else if (width != 0 && height == 0 && area != 0)
        {
            height = area/width;

        }
        // ���� ���ϱ�
        else if (width != 0 && height != 0 && area == 0)
        {
            area = width*height;
        }
        // 0 0 0 �϶� Ż��
        else
        {
            break;
        }

        vecResult1.push_back(width);
        vecResult2.push_back(height);
        vecResult3.push_back(area);


    }
    
    vector<int>::iterator iter = vecResult1.begin();
    vector<int>::iterator iter2 = vecResult2.begin();
    vector<int>::iterator iter3 = vecResult3.begin();

    for (; iter != vecResult1.end(); ++iter)
    {   
        cout << *iter << " " << *iter2 << " " << *iter3 << "\n";
        ++iter2;
        ++iter3;
    }




}