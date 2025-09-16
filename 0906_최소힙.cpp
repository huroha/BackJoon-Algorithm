#include <iostream>
#include <set>

int main()
{
	using namespace std;
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);


	multiset<int> s1 = {};


	int input = 0;
	cin >> input;

	for (int i = 0; i < input; ++i)
	{
		int a = 0;
		cin >> a;

		if (a == 0)
		{
			if (s1.size() != 0)
			{
				cout << *s1.begin() << "\n";
				s1.erase(s1.begin());
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else
		{
			s1.insert(a);
		}

	}

}