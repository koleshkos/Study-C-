#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int dx = abs(x1 - x2);
	int dy = abs(y1 - y2);

	if (x1 == x2 || y1 == y2) { cout << "Угрожают друг другу!" << endl; }
	else if (dx == dy) { cout << "Только ферзь угрожает слону!" << endl; }
	else { cout << "Не угрожают друг другу!" << endl; }

	system("pause");
	return 0;
}
