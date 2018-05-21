#include <iostream>

using namespace std;

int main()
{
	int n, m, ats = 0, b = 0;
	cin >> n >> m;
	b = n;
	for (int i = 1; i <= m; i++)
	{
		ats += b;
		b = b * n;
	}
	cout << ats;a
}
