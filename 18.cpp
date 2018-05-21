#include <iostream>

using namespace std;

int main()
{	
	int n, a = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a = a * 2;
		if (a > 1000)
		{
			a -= 1000;
		}
	}
	if (n > 9 && a < 100)
	{
		cout << 0;
	}
	if (n > 9 && a < 10)
	{
		cout << 0;
	}
	cout << a;
}
