#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	vector<int> f;
	for (int x = -1000; x <= 1000; x++)
	{
		if (a * pow(x, 3) + b * pow(x, 2) + c * x + d == 0)
		{
			f.push_back(x);
		}
	}
	if (f.size() == 1)
	{
		cout << f[0];
	}
	if (f.size() == 2)
	{
		cout << f[0] << "_" << f[1];
	}
	if (f.size() == 3)
	{
		cout << f[0] << "_" << f[1] << "_" << f[2];
	}a
}
