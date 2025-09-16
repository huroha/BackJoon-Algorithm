#include <iostream>
#include <math.h>
int main()
{
	using namespace std;
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int N =0, row =0, col =0;
	cin >> N >> row >>col;
	
	// �ƿ� �� ������ �࿭ ���� ���� ���ϰڳ�

	// �迭�� ����ؼ� 4��� �ؼ� ������
	int size = pow(2,N);
	int result =0;
	while (size > 1)
	{
		size /= 2;

		// �»��
		if (row < size && col < size)
		{
			// ������������.
			continue;
		}
		// ����
		else if (row < size && col >=size)
		{
			// 1��и� �����־�� ��.
			result += size*size;

			// ���� ��Ҹ� ���� ����
			col -= size;
		}
		// ���ϴ�
		else if (row >= size && col < size)
		{
			// 2��и���� ���ϱ�
			result += size*size*2;
			row -= size;
		}
		// ���ϴ�
		else if(row >= size && col >= size)
		{
			result += size*size*3;
			col -= size;
			row -= size;
		}

	}

	cout << result;
}