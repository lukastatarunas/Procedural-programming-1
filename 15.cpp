#include <iostream>

using namespace std;

int main()
{
	long long n, m, rez = 0;
	cin >> n >> m;
	while (n >= 1)
	{
		if (n % 2 != 0)
		{
			rez = rez + m;
		}
		n = n / 2;
		m = m * 2;
	}
	cout << rez;
}
