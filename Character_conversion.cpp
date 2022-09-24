#include <iostream>
#include <ctype.h>
#include <cmath>
using namespace std;

int main()
{
	char a = 'A', b;
	cin >> a;
	if (a > 96 && a < 123)
	{
		b = a - 32;
		cout << b;
	}
	if (a > 64 && a < 91)
	{
		b = a + 32;
		cout << b;
	}
	if (a > 47 && a < 58)
	{
		cout << pow(a - 48, 2);
	}
	if (a > 32 && a < 48)
	{
		cout << a;
	}
	if (a > 57 && a < 65)
	{
		cout << a;
	}
	if (a > 57 && a < 65)
	{
		cout << a;
	}
	if (a > 122 && a <= 126)
	{
		cout << a;
	}
	return 0;
}