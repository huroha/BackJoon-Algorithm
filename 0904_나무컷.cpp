#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	using namespace std;
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int tree = 0;
	int goal = 0;

	vector<int> vtree = {};
	cin >> tree >> goal;

	long long result = 0;
	int total = 0;
	for (int i = 0; i < tree; ++i)
	{
		int t = 0;
		cin >> t;
		vtree.push_back(t);
	}

	sort(vtree.begin(), vtree.end());

	int low = 0;
	int high = vtree[vtree.size() - 1];
	int half = 0;

	while (low <= high)
	{
		result = 0;

		half = (low+high) / 2;

		for (int i = 0; i < vtree.size(); ++i)
		{
			if (vtree[i] - half > 0)
			{
				result += vtree[i] - half;
			}
		}


		if (result >= goal)
		{
			total = half;
			low = half + 1;
		}
		else
		{
			high = half -1;
		}
	}


	cout << total;
}