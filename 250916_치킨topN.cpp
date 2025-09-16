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

    // ���� ��ҵ� �߰�
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

    // ũ�� 2���� groupSize���� �ܰ躰�� ����
    for (int size = 2; size <= groupSize; size *= 2)
    {
        // ���� ũ��(size)�� merge �۾� ����
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

    // ��� ���
    for (int i = 0; i < N; i++) {
        cout << chicken[i];
        if (i < N - 1) cout << " ";
    }

    return 0;
}
