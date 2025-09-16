#include <iostream>
#include <vector>
#include <string>

int main()
{

	using namespace std;
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int Case =0;
	
	int h =0, w= 0, num =0;
	cin >>Case;

	for (int i = 0; i < Case; ++i)
	{
		cin >> h >> w >> num;
		string result = {};

		// 호수 증가 = (num / h ) +1 호
		// 층수 증가 = num - (num/h)*h;
		int floor = num - (num / h) * h;
		if (num % h == 0)
		{
			floor = h;
		}
		int door = (num/h) + 1;
		if (num % h == 0)
		{
			door -=1;
		}
		result.append(to_string(floor));
		if (door < 10)
		{
			result.append("0");
			result.append(to_string(door));
		}
		else
		{
			result.append(to_string(door));
		}
		cout <<result << "\n";
	}

}