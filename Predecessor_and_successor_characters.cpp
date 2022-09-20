#include <iostream>
using namespace std;
int main()
{
	char n = 'B', x = 'A', y = 'C';
	cin >> n;
	x = n - 1;
	y = n + 1;
	int b = n, a = x, c = y;
	cout << x << " " << n << " " << y << endl;
	cout << a << " " << b << " " << c << endl;
	return 0;
}