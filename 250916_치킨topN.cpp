#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void merge(vector<int>& arr, int left, int mid, int right)
{
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // 남은 요소들 추가
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int i = 0; i < k; i++)
    {
        arr[left + i] = temp[i];
    }
}

int main() {

    int N;
    cin >> N;

    vector<int> chicken(N);
    for (int i = 0; i < N; i++)
    {
        cin >> chicken[i];
    }

    int k;
    cin >> k;

    int groupSize = N / k;

    // 크기 2부터 groupSize까지 단계별로 수행
    for (int size = 2; size <= groupSize; size *= 2)
    {
        // 현재 크기(size)로 merge 작업 수행
        for (int left = 0; left < N; left += size)
        {
            int mid = left + size / 2 - 1;
            int right = min(left + size - 1, N - 1);

            if (mid < right)
            {
                merge(chicken, left, mid, right);
            }
        }
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        cout << chicken[i];
        if (i < N - 1) cout << " ";
    }

    return 0;
}
