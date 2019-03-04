//через указатели
-------------------------
#include <cmath>     
#include <iostream>
#include <iomanip> 
using namespace std;

void calc_val(double *f, double x, double a);

int main()
{
	double h = 0.5, xn = 1, xk = 5, x, y = 0, a = 2.5;
	const double  x_end = xk + h / 2;

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "    y      " << c4 << '\n';

	int i = 0;
	for (x = xn; x < x_end; i++)
	{
		calc_val(&y, x, a);
		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setiosflags(ios::fixed) << setprecision(6);
		cout << c4 << setw(11) << y << c4 << "\n";
		x = xn + i * h;
	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';

	system("pause");
	return 0;
}

void calc_val(double *f, double x, double a)
{
	if (x > a)
	{
		*f = x * pow(x - a, 1 / 3);
	}
	else if (x == a)
	{
		*f = x * sin(a*x);
	}
	else if (x < a)
	{
		*f = exp(-a * x) * cos(a*x);
	}
-------------------------
//через ссылки
------------------------------
#include <cmath>     
#include <iostream>
#include <iomanip> 
using namespace std;

void calc_val(double &f, double x, double a);

int main()
{
	double h = 0.5, xn = 1, xk = 5, x, y = 0, a = 2.5;
	const double  x_end = xk + h / 2;

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "    y      " << c4 << '\n';

	int i = 0;
	for (x = xn; x < x_end; i++)
	{
		calc_val(y, x, a);
		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setiosflags(ios::fixed) << setprecision(6);
		cout << c4 << setw(11) << y << c4 << "\n";
		x = xn + i * h;
	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';

	system("pause");
	return 0;
}

void calc_val(double &f, double x, double a)
{
	if (x > a)
	{
		f = x * pow(x - a, 1 / 3);
	}
	else if (x == a)
	{
		f = x * sin(a*x);
	}
	else if (x < a)
	{
		f = exp(-a * x) * cos(a*x);
	}
	
}
