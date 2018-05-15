#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int max = 0;
	cin >> a >> b >> c;
	if (a >= b )
	{
		if (a >= c)
		{
			max = a;
		}
	}
	if (c >= a)
	{
		if (c >= b)
		{
			max = c;
		}
	}
	if (b >= a)
	{
		if (b >= c)
		{
			max = b;
		}
	}
	cout << max;
}
