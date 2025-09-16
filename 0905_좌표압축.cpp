#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
int main()
{
	using namespace std;
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int input=0, num =0;
	vector<int> vnum = {};
	vector<int> snum = {};
	map<int, int> result ={};
	map<int,int>::iterator iter;
	cin >> input;

	for (int i = 0; i < input; ++i)
	{
		cin >>num;

		vnum.push_back(num);
		snum.push_back(num);
	}

	sort(snum.begin(), snum.end());
	//snum.erase(unique(snum.begin(),snum.end()), snum.end());

	int idx = 0;
	for (int i = 0; i < snum.size(); ++i)
	{
		
		pair<map<int, int>::iterator, bool> isDuple = result.insert(make_pair(snum[i],idx));
		if (isDuple.second)
		{
			++idx;
		}
	}

	for (int i = 0; i < vnum.size(); ++i)
	{
		iter = result.find(vnum[i]);
		cout <<  iter->second <<  " ";
	}


}