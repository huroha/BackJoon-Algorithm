#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	using namespace std;
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int input =0, cutsize =0;

	cin >> input >> cutsize;

	vector<int> vlan = {};

	for (int i = 0; i < input; ++i)
	{
		int lan =0;
		cin >> lan;
		vlan.push_back(lan);
	}
	sort(vlan.begin(), vlan.end());
	long long high = vlan[vlan.size()-1];
	long long low = 1;
	int total =0;
	int count = 0;
	long long half = 0;
	while (low <= high)
	{
		count =0;
		half = (low + high) /2;

		for (int i = 0; i < vlan.size(); ++i)
		{
			count += vlan[i]/half;
		}


		if (count >= cutsize)
		{
			if(total < half)
				total = half;
			low = half +1;
		}
		else
		{
			high = half - 1;
		}

	}

	
	
	cout << total;

}