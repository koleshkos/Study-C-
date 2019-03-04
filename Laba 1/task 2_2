#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
	double x1, y1, x2, y2, min, max, a, b, c, d;
	cin >> x1 >> y1 >> x2 >> y2;
	min = x1 + y2;
	if (x2 + y2 < min)  min = x2 + y2;
	if (x1*y1 < min) min = x1 * y1;
	if (x2*y2 < min) min = x2 * y2;
	a = min;

	min = x1;
	if (y1 < x1) { min = y1; }	
	b = min;

	max = x2  +  y2;
	if (x1*y1 > max) { max = x1 * y1; }
	c = max;

	min = x2;
	if (y2 < min) { min = y2; }
	d = min;
	
	cout << a / (b + c + d) << endl;

	system ("pause");
	return 0;
	
}
