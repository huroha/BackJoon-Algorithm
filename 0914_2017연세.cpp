#include <iostream>

int main()
{

    using namespace std;
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    // ���� +2 >= ����
    // 3���� 0���� ����
    // ����  Ȧ���� �ȵ�
    // �й��ϴ� ���� �ٸ� ����� ��

    int tek=2;

    int Candy =0;

    cin >>Candy;

    int i=1;
    int result =0;
   
 
    while(true)
    {
       int remain = Candy - tek*i;
       int young = 1;
       int nam = young + 2;
       if (Candy - tek * i < 4)
       {
           break;
       }

       while (remain >= young + nam)
       {
            ++young;
            nam = young+2;
            ++result;
       }
       ++i;

       

        
    }
    cout << result;
}