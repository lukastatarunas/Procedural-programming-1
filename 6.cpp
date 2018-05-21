#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	int x;
	cin >> x;
	double d;
	d = (5 * pow(x, 3) + pow(sin(exp(3 * x) - 16 * pow(x, 2)), 2)) / (sin(4 * x) / (cos(4 * x) + 1) + 1);
	cout << fixed << setprecision(2) << d;
}
