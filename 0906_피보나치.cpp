#include <iostream>
#include <vector>


struct tFibo {

	int a;
	int b;
};

int main()
{

	using namespace std;
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios_base::sync_with_stdio(false);


	int input =0;
	cin >> input;
	vector<tFibo> result= {};


	for (int i = 0; i < 41; ++i)
	{
		tFibo t1;
		t1.a = 0;
		t1.b =0;
		if (i == 0)
		{
			t1.a =1;
			t1.b =0;
			result.push_back(t1);
		}
		else if (i == 1)
		{
			t1.a = 0;
			t1.b = 1;
			result.push_back(t1);
		}
		else
		{

			t1.a += result[i - 2].a;
			t1.b += result[i - 2].b;


			t1.a += result[i - 1].a;
			t1.b += result[i - 1].b;

			result.push_back(t1);
		}


	}

	for (int i = 0; i < input; ++i)
	{
		int N;
		cin >> N;
		cout << result[N].a << " " << result[N].b << "\n";
	}
	


}