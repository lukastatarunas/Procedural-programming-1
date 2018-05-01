#include <iostream>
#include <string>

using namespace std;

int main()
{	
	int n;
	string Sum = "49455";
	cin >> n;
	if (n > 2)
	{
		Sum.insert(3, n - 3, '9');
		Sum.insert(Sum.size(), n - 2, '0');
	}
	else if (n == 2)
	{
		Sum = "4905";
	}
	else if (n == 1)
	{
		Sum = "45";
	}
	else
	{
		Sum = "0";
	}
	cout << Sum;
}
