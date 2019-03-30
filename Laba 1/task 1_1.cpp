#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	double x = 4.11, a, b;
	a = sin(log(pow(x, 2)) + sin(M_PI * (pow(x, 2))));
	b = pow(pow(x, 2) + sin(x) + exp(cos(x)), 1 / 4);
	cout << a * b << endl;
	system("pause");
}
