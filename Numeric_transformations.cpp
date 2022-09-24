#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	cin >> a;
	if (a < 100 || a>999)
	{
		cout << "-1";
	}
	else
	{
		b = a / 100;
		c = a % 100 / 10;
		d = a % 10;
		e = (d * 100) + (c * 10) + b;
		cout << e;
	}
	return 0;
}