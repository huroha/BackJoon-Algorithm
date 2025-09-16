#include <iostream>
#include <string>
int main()
{
	using namespace std;
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int input =0;

	cin >>input;

	int count =0;

	for (int i = 0; i < input; ++i)
	{
		string s1 = {};
		cin >>s1;

		if (s1.size() < 4)
		{
			++count;
			continue;
		}
		if (s1.size() > 4)
		{
			continue;
		}

		if (s1[2] - 48 > 9)
		{
			--count;
		}
		else if (s1[2] - 48 == 9)
		{
			if (s1[3] - 48 != 0)
			{
				--count;
			}
		}
		++count;

	}
	cout << count;
}