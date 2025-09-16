#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int bfs(vector<vector<int>>& salad, int n, int m)
{
    int worm_count = 0;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (salad[i][j] == 1 && !visited[i][j])
            {
                worm_count++;
                q.push({ i, j });
                visited[i][j] = true;

                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = x + dx[dir];
                        int ny = y + dy[dir];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && salad[nx][ny] == 1 && !visited[nx][ny])
                        {
                            q.push({ nx, ny });
                            visited[nx][ny] = true;
                        }
                    }
                }
            }
        }
    }
    return worm_count;
}

int main() {


    int  Case,n, m, num;
    
    cin >> Case;  // m: ��, n: ��

    for (int i = 0; i < Case; ++i)
    {
        int m, n, num;
        cin >> m >> n >> num;
        vector<vector<int>> salad(n, vector<int>(m));
        // ���� ���� �Է�
        for (int i = 0; i < num; ++i)
        {
            int x, y;
            cin >> x >> y;
            salad[y][x] = 1;
        }

        // �ּ� ������
        int result = bfs(salad, n, m);

        // ��� ���
        cout << result << "\n";
    }
  

    return 0;
}