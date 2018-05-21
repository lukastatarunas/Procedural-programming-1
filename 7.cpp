#include <iostream>
#include <iomanip>

using namespace std;

int main()
{	
	int x1, y1, x2, y2;
	double a;
	cin >> x1 >> y1 >> x2 >> y2;
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << fixed << setprecision(2) << a;aa
}
