#include <iostream>
using namespace std;

int main()
{
	float r, h, p = 3.14;
	double area, length, surface_area, volume;
	cin >> r >> h;
	area = p * r * r;
	length = 2 * p * r;
	surface_area = 4 * p * r * r;
	volume = h * p * r * r;
	cout << length << " " << area << " " << surface_area << " " << volume << " " << endl;
	return 0;
}
