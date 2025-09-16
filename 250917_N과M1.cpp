#include <iostream>
#include <vector>
#include <algorithm>

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void permutation(std::vector<int>& data, int depth, int N, int M, std::vector<std::vector<int>>& result)
{
    if (depth == M)
    {
        std::vector<int> cur;
        for (int i = 0; i < M; ++i)
        {
            cur.push_back(data[i]);
        }
        result.push_back(cur);
        return;
    }

    for (int i = depth; i < N; ++i)
    {
        swap(data[depth], data[i]);
        permutation(data, depth + 1, N, M, result);
        swap(data[depth], data[i]);
    }

}


int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> P;
    vector<vector<int>> result;

    int N = 0, M = 0;
    cin >> N >> M;

    for (int i = 0; i < N; ++i)
    {
        P.push_back(i + 1);
    }
    permutation(P, 0, N, M,result);

    sort(result.begin(), result.end());

    for (int i = 0; i < result.size(); ++i)
    {
        for (int j = 0; j < result[i].size(); ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}