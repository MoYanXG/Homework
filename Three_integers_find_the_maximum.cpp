#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && c > b)
	{
		if (a > c)
			cout << a;
		else
			cout << c;
	}
	if (b > a && c > a)
	{
		if (b > c)
			cout << b;
		else
			cout << c;
	}
	if (a > c && b > c)
	{
		if (a > b)
			cout << a;
		else
			cout << b;
	}
	return 0;
}