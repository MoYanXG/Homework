#include <iostream>
using namespace std;

int main()
{
	int Y, M, Day = 0;
	cin >> Y;
	cin >> M;
	if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
		cout << "Day=31";
	else if (M == 4 || M == 6 || M == 9 || M == 11)
		cout << "Day=30";
	else
	{
		if (Y % 4 != 0)
			cout << "Day = 28";
		else if (Y % 100 == 0 && Y % 400 != 0)
			cout << "Day = 28";
		else
			cout << "Day = 29";
	}
	return 0;
}