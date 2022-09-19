#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double s, a, b, c, m, k;
	cin >> a;
	cin >> b;
	cin >> c;
	s = (a + b + c) / 2;
	k = (s - a) * (s - b) * (s - c) * s;
	m = sqrt(k);
	cout << m << endl;
	return 0;
}
