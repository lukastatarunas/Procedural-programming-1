#include <iostream>

using namespace std;

int main()
{	
	double a, b, c, D, ats1, ats2, ats;
	cin >> a >> b >> c;
	D = b * b - 4 * a * c;
	if (D > 0)
	{
		ats1 = (-b + sqrt(D)) / (2 * a);
		ats2 = (-b - sqrt(D)) / (2 * a);
		cout << ats2 << "_" << ats1;
	}
	else if (D == 0)
	{
		ats = -b / (2 * a);
		cout << ats;
	}
	else
	{
		cout << "NO";
	}
}
