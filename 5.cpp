#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	double a, b;
	cin >> a >> b;
	double d;
	d = 2 * sin(a) + (cos(b) - sqrt(tan(b))) * pow(log10(a), 5);
	cout << fixed << setprecision(2) << d;a
}
