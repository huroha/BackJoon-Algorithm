#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>




int main()
{
    using namespace std;
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    // ������ ��
    // 1. R ���꿡�� ��¥�� ��� ���Ҹ� �������� �ȵ�.
    // 2. D ���꿡�� �迭�� �� �� ���Ҹ� ����� �������� ���� �ȵ�.
    // 3. �� �迭�� [] ����̴�.
    // 4. �迭�� ����־ R ������ ������ ���� ����.
    // 5. �׽�Ʈ ���̽����� �ʱ�ȭ �Ű� �� ��.
    


    int Case =0;


    cin >>Case;

    bool ErrCheck = false;
    vector<string> result = {};

    for (int i = 0; i < Case; ++i)
    {
        // �ʱ�ȭ
        string func = {};
        int arrSize = 0;
        string arr = {};

        // �Լ� �Է�
        cin >> func;
        cin >> arrSize;
        cin >> arr;

        string Int = {};
        deque<int> queue = {};
        // �迭������ ���ڸ� �����ؼ� ����� �迭�� ������ ��.
        for (int j = 1; j < arr.size(); ++j)
        {
            // �迭�� �ƹ��͵� �ȵ�������� ����ִ� �迭�����.
            if(arrSize == 0)
                break;
            // ,�� ���ö������� ������
            if (arr[j] != ',')
            {
                if(arr[j] != ']')
                    Int.push_back(arr[j]);
                else
                {
                    // ������ ] �� ������.
                    queue.push_back(stoi(Int));
                    Int = {};
                }
            }
            // , �� �������� stoi �ϰ� �ٽ� string Int�� �ʱ�ȭ ���־����.
            else if (arr[j] == ',' || arr[j] == ']')
            {
                queue.push_back(stoi(Int));
                Int = {};
            }
        }

        // ������ Check �ʱ�ȭ
        bool RCheck = false;
        // ������ �������� �Լ� ����� �ǽ���.
        for (int k = 0; k < func.size(); ++k)
        {
            if (func[k] == 'R')
                RCheck = !RCheck;
            else
            {
                // R�� True ��� �ڿ������� �����ϰ�
                // R�� false��� �տ������� �����Ѵ�.
                // �׷��� �迭�ȿ� �� ���ڰ� ����? Error ����ؾ���.
                if (queue.size() == 0)
                {
                    ErrCheck =true;
                    break;
                }

                if (RCheck)
                {
                    // ������ �Ǿ��ִ� ������.
                    queue.pop_back();
                }
                else
                {
                    // ������
                    queue.pop_front();
                }
            }
        }

        // ��� string �����ؾ���.

        // Err Ȯ��
        if (ErrCheck)
        {
            string err = "error";
            result.push_back(err);
        }
        else
        {
            // ����
            string calstring = {};
            calstring.push_back('[');
            for (int l = 0; l < queue.size(); ++l)
            {
                // ������ �������̸� �ִ°͵� �ڿ������� �־����.
                //
                string temp;
                if (RCheck)
                {
                    temp = to_string(queue[queue.size()-l-1]);
                }
                else
                {
                    temp = to_string(queue[l]);
                }
                temp.push_back(',');
                calstring.append(temp);
            }
            if(calstring.back() == ',')
                calstring.pop_back();
            calstring.push_back(']');

            result.push_back(calstring);
        }

        // err Check�Ǿ��ٸ� �ʱ�ȭ
        ErrCheck = false;




    }

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << "\n";
    }


}



//int main()
//{
//    using namespace std;
//    std::cin.tie(nullptr);
//    std::ios_base::sync_with_stdio(false);
//
//    int Case =0;
//    cin >> Case;
//
//    vector<string> result ={};
//    vector<int> intarr ={};
//    int many = 0;
//    bool errCheck = false;
//   
//
//    for (int i = 0; i < Case; ++i)
//    {
//        bool reverseCheck = false;
//        string func = {};
//        cin>>func;
//        string arr = {};
//        cin >> many;
//
//        cin >> arr;
//        string toint = {};
//
//        int arrsize = arr.size();
//        int funcsize = func.size();
//
//        // ���� �̾Ƴ���
//        for (int i = 1; i < arrsize; ++i)
//        {
//            
//            if (many != 0)
//            {
//
//                if (arr[i] != ',')
//                {
//                    if (arr[i] != ']')
//                        toint += arr[i];
//                    else
//                    {
//                        intarr.push_back(stoi(toint));
//                    }
//                }
//                else
//                {
//
//                    intarr.push_back(stoi(toint));
//                    toint = {};
//                }
//            }
//        }
//
//        int intarrsize = intarr.size();
//        // �Լ� ����
//        for (int j = 0; j < funcsize; ++j)
//        {
//            // ������� ��. �ٵ� �������� �ȵʤ��� �ð��ʰ�������
//            if (func[j] == 'R')
//            {
//                reverseCheck = !reverseCheck;
//            }
//            // ���ߵ�
//            else
//            {
//                vector<int>::iterator iter;
//                if (reverseCheck)
//                {
//                    iter = intarr.end();
//                    if(iter != intarr.begin())
//                        --iter;
//                }
//                else
//                    iter = intarr.begin();
//
//
//                // �迭�� ���ڰ� �ϳ��� �־����.
//                if(intarrsize != 0)
//                    intarr.erase(iter);
//                else
//                    errCheck = true;
//            }
//        }
//        intarrsize = intarr.size();
//        // ��¹� �����
//        string sprint = {};
//
//        // ������ ���
//        if (errCheck)
//        {
//            sprint = "error";
//            result.push_back(sprint);
//            errCheck = false;
//        }
//        else
//        {
//            sprint += '[';
//            for (int k = 0; k < intarrsize; ++k)
//            {
//                sprint += to_string(intarr[k]);
//                sprint += ',';
//            }
//            sprint.pop_back();
//            sprint += ']';
//            result.push_back(sprint);
//        }
//        // intarr clear
//        intarr.clear();
//
//    }
//
//    for (int i = 0; i < result.size(); ++i)
//    {
//        cout << result[i] << "\n";
//    }
//
//
//}

