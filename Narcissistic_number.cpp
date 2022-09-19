#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, a, b, c, A, B, C;
	cin >> x;
	a = x / 100;
	b = x % 100 / 10;
	c = x % 10;
	A = pow(a, 3);
	B = pow(b, 3);
	C = pow(c, 3);
	if (A+B+C==x&&x>100)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}
