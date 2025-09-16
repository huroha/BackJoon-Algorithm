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

    // 주의할 점
    // 1. R 연산에서 진짜로 모든 원소를 뒤집으면 안됨.
    // 2. D 연산에서 배열의 맨 앞 원소를 지우는 방향으로 가면 안됨.
    // 3. 빈 배열은 [] 출력이다.
    // 4. 배열이 비어있어도 R 연산은 문제가 되지 않음.
    // 5. 테스트 케이스마다 초기화 신경 쓸 것.
    


    int Case =0;


    cin >>Case;

    bool ErrCheck = false;
    vector<string> result = {};

    for (int i = 0; i < Case; ++i)
    {
        // 초기화
        string func = {};
        int arrSize = 0;
        string arr = {};

        // 함수 입력
        cin >> func;
        cin >> arrSize;
        cin >> arr;

        string Int = {};
        deque<int> queue = {};
        // 배열내부의 숫자를 추출해서 계산할 배열을 만들어야 함.
        for (int j = 1; j < arr.size(); ++j)
        {
            // 배열에 아무것도 안들어있으면 비어있는 배열써야함.
            if(arrSize == 0)
                break;
            // ,이 나올때까지는 숫자임
            if (arr[j] != ',')
            {
                if(arr[j] != ']')
                    Int.push_back(arr[j]);
                else
                {
                    // 마지막 ] 이 등장함.
                    queue.push_back(stoi(Int));
                    Int = {};
                }
            }
            // , 이 나왔으면 stoi 하고 다시 string Int는 초기화 해주어야함.
            else if (arr[j] == ',' || arr[j] == ']')
            {
                queue.push_back(stoi(Int));
                Int = {};
            }
        }

        // 리버스 Check 초기화
        bool RCheck = false;
        // 추출이 끝났으니 함수 계산을 실시함.
        for (int k = 0; k < func.size(); ++k)
        {
            if (func[k] == 'R')
                RCheck = !RCheck;
            else
            {
                // R이 True 라면 뒤에서부터 빼야하고
                // R이 false라면 앞에서부터 빼야한다.
                // 그런데 배열안에 뺄 숫자가 없다? Error 출력해야함.
                if (queue.size() == 0)
                {
                    ErrCheck =true;
                    break;
                }

                if (RCheck)
                {
                    // 리버스 되어있는 상태임.
                    queue.pop_back();
                }
                else
                {
                    // 정방향
                    queue.pop_front();
                }
            }
        }

        // 출력 string 제작해야함.

        // Err 확인
        if (ErrCheck)
        {
            string err = "error";
            result.push_back(err);
        }
        else
        {
            // 제작
            string calstring = {};
            calstring.push_back('[');
            for (int l = 0; l < queue.size(); ++l)
            {
                // 리버스 적용중이면 넣는것도 뒤에서부터 넣어야함.
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

        // err Check되었다면 초기화
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
//        // 숫자 뽑아내기
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
//        // 함수 실행
//        for (int j = 0; j < funcsize; ++j)
//        {
//            // 뒤집어야 함. 근데 뒤집으면 안됨ㅋㅋ 시간초과남ㅋㅋ
//            if (func[j] == 'R')
//            {
//                reverseCheck = !reverseCheck;
//            }
//            // 빼야됨
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
//                // 배열에 숫자가 하나라도 있어야함.
//                if(intarrsize != 0)
//                    intarr.erase(iter);
//                else
//                    errCheck = true;
//            }
//        }
//        intarrsize = intarr.size();
//        // 출력문 만들기
//        string sprint = {};
//
//        // 에러일 경우
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

