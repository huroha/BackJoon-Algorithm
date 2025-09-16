#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int Class = 0;
    cin >> Class;

    for (int i = 0; i < Class; ++i)
    {
        int student = 0;
        cin >> student;

        vector<int> score;
        for (int j = 0; j < student; ++j)
        {
            int s = 0;
            cin >> s;
            score.push_back(s);
        }
        sort(score.begin(), score.end());
        int result = 0;
        for (int k = 0; k < score.size()-1; ++k)
        {
            if (score[k + 1] - score[k] >= result)
                result = score[k + 1] - score[k];
        }
        cout << "Class " << i+1 << "\n";
        cout << "Max " << score[score.size() - 1] << ", Min " << score[0] << ", Largest gap " << result <<"\n";
    }


}