#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	int a, b, c;
	cin >> a >> b >> c;
	double d;
	d = (b + sqrt(b*b - a*c)) / (2 * a);
	cout << fixed << setprecision(3) << d;a
}
