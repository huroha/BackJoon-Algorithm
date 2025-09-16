#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int BFS(int start, const vector<vector<int>>& _computer, vector<bool>& _isVisit)
{
    queue<int> q;
    q.push(start);
    _isVisit[start] = true;
    int result = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int i = 0; i < _computer[cur].size(); ++i)
        {
            int next = _computer[cur][i];
            if (!_isVisit[next]) {
                q.push(next);
                _isVisit[next] = true;
                ++result;
            }
        }
    }
    return result;
}

int main() {

    int vertex=0, line =0;

    cin >> vertex >> line;

    vector<vector<int>> computer(vertex+1);
    vector<bool> isVisit(vertex+1, false);

   

    for (int i = 0; i < line; ++i)
    {
        int s, e;
        cin >> s >> e;
        // 양방향 간선을 연결
        computer[s].push_back(e);
        computer[e].push_back(s);
    }

    int result = BFS(1,computer,isVisit);

    cout << result;
}

