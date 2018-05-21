#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	double p, h, r, V, pi = 3.14159265359;
	cin >> p >> h >> r;
	if (p == 1)
	{
		V = pi * r * r * h;
	}
	if (p == 2)
	{
		V = pi * r * r * h / 3;
	}
	cout << fixed << setprecision(2) << V;a
}
