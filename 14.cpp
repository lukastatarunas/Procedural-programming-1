#include <iostream>

using namespace std;

int main()
{
	long long n, suma = 0, vid;
	int k = 0, a = 1;
	cin >> n;
	if (n >= 2)
  {
		while (a <= n)
		{
			if (a % 2 == 0)
			{
				suma += a;
				k++;
			}
			a++;
		}
		vid = suma / k;
		cout << vid;
	}
	else
  {
		cout << "0";
	}
}
