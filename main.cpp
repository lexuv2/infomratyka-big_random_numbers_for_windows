#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int main()
{
	random_device rd;
	default_random_engine generator(rd());
	uniform_int_distribution<long long unsigned> distribution(0, 0xF4240);
	int n = 10000;
	for (int i = 0; i < n; ++i)
	{


		cout << distribution(generator) << endl;
	}
	system("pause");
}
