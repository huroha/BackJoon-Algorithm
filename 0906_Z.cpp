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
	
	// 아오 씹 아직도 행열 구분 ㅈㄴ 못하겠네

	// 배열을 계속해서 4등분 해서 들어가야함
	int size = pow(2,N);
	int result =0;
	while (size > 1)
	{
		size /= 2;

		// 좌상단
		if (row < size && col < size)
		{
			// 더해주지않음.
			continue;
		}
		// 우상단
		else if (row < size && col >=size)
		{
			// 1사분면 더해주어야 함.
			result += size*size;

			// 범위 축소를 위한 감소
			col -= size;
		}
		// 좌하단
		else if (row >= size && col < size)
		{
			// 2사분면까지 더하기
			result += size*size*2;
			row -= size;
		}
		// 우하단
		else if(row >= size && col >= size)
		{
			result += size*size*3;
			col -= size;
			row -= size;
		}

	}

	cout << result;
}