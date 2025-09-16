#include <iostream>
#include <string>
#include <vector>
#include <math.h>
int main()
{
    using namespace std;
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string s1;
    string s2;

    cin >> s1 >> s2;

    int s1Len = s1.size();
    int s2Len = s2.size();
    vector<vector<int>>result(s2Len + 1, vector<int>(s1Len + 1, 0));

    for (int i = 1; i < s1Len+1; ++i)
    {
        for (int j = 1; j < s2Len + 1; ++j)
        {
            // 문자가 같으면 좌상단에서 +1
            if (s1[i - 1] == s2[j - 1])
                result[i][j] = result[i - 1][j - 1] + 1;
            // 문자가 다르면 좌 or 상단에서 큰값을 기록
            else
                result[i][j] = max(result[i - 1][j], result[i][j - 1]);
        }

    }
    cout << result[s1Len][s2Len];
}