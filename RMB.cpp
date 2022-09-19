#include <iostream>
using namespace std;

int main()
{
	int x, ten, five, two, one;
	cin >> x;
	ten = x / 10;
	five = x % 10 / 5;
	two = x % 5 / 2;
	one = x-ten*10-five*5-two*2;
	cout << ten << " " << five << " " << two << " " << one << endl;
	return 0;
}
