#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	double a, b, S, p = 3.14159;
	cin >> a >> b;
	if (a < b)
	{
		S = p * pow(a / 2, 2);
		cout << fixed << setprecision(2) << S;
	}
	else
	{
		S = p * pow(b / 2, 2);
		cout << fixed << setprecision(2) << S;a
	}
}
