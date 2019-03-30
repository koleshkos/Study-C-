#include <math.h>
#include <iostream>
using namespace std;

const int n = 5; //степень многочлена 
int  main()
{
	double   x;          // точка, в которой надо вычислить значение многочлена
	int koef = 1, znak = -1, slog, n;		//koef-коэфициент при x, znak - знак меняется через раз, slog - это чтобы не напартачить с коэфициентом       
	cout << "n= ";
	cin >> n;
	cout << "x= ";
	cin >> x;
	double   xpow = 1.0;		 //переменная для вычисления значения х в текущей степени, сначала х0=1  
	double result = 6;		 // результат вычесления в точке
	
	for (int i = 1; i <= n; i++)
	{
		xpow *= x*x;		// меняем степень x
		slog = koef * znak;			// берём коэфициент и меняем знак при нём
		result += slog * xpow;		 // слаживаем в результат
		znak *= -1;		// меняем знак для чередования
		koef++;		//увеличиваем коэфициент
	}
	cout << result << endl;
	system("pause");
	return 0;
}








__________________________________________________________________________
#include <math.h>
#include <iostream>
#include <iomanip> 
using namespace std;


int  main()
{
	double x, h = 0.2, xn = 1, xk = 3;          // точка, в которой надо вычислить значение многочлена
	int koef = 1, znak = -1, slog, n;		//koef-коэфициент при x, znak - знак меняется через раз, slog - это чтобы не напартачить с коэфициентом, n - степень многочлена      
	cout << "n= ";
	cin >> n;
	
	const double  x_end = xk + h / 2;
	double   xpow = 1.0;		 //переменная для вычисления значения х в текущей степени, сначала х0=1  
	double result = 6;		 // результат вычесления в точке

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "  result   " << c4 << '\n';


	int j = 0;
	x = xn;
	for (x ; x < x_end; j++)
	{
		x = xn + j * h;
		for (int i = 1; i <= n; i++)
		{
			xpow *= x * x;		// меняем степень x
			slog = koef * znak;			// берём коэфициент и меняем знак при нём
			result += slog * xpow;		 // слаживаем в результат
			znak *= -1;		// меняем знак для чередования
			koef++;		//увеличиваем коэфициент
		}

		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setiosflags(ios::fixed) << setprecision(6);
		cout << c4 << setw(11) << result << c4 << "\n";

		
		result = 0;
	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';
	system("pause");
	return 0;
}

____________________________________________________________________
3
__________________________
#include <math.h>
#include <iostream>
#include <iomanip> 
using namespace std;


int  main()
{
	double x,shag = 0.2, xn = 1, xk = 3;          // точка, в которой надо вычислить значение многочлена, шаг, начальная и конец
	int koef = 1, znak = -1, slog, n;		//koef-коэфициент при x, znak - знак меняется через раз, slog - это чтобы не напартачить с коэфициентом, n - степень многочлена      
	cout << "n= ";
	cin >> n;

	const double  x_end = xk +shag / 2; // высчитываем конец
	double   xpow = 1.0;		 //переменная для вычисления значения х в текущей степени, сначала х0=1  
	double result = 6;		 // результат вычесления в точке

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "  result   " << c4 << '\n'; // шапка


	int j = 0;
	x = xn;
	for (x; x < x_end; j++)
	{
		x = xn + j *shag;

		for (int i = 1; i <= n; i++)
		{
			xpow *= x * x;		// меняем степень x
			slog = koef * znak;			// берём коэфициент и меняем знак при нём
			result += slog * xpow;		 // слаживаем в результат
			znak *= -1;		// меняем знак для чередования
			koef++;		//увеличиваем коэфициент
		}

		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setprecision(2);
		cout << c4 << setw(11) << result << c4 << "\n"; // выводит результат

		result = 0;
	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';
	system("pause");
	return 0;
}
==========================================================================
_______________________________________________________
робочий
____________________________________
======================================================================
#include <math.h>
#include <iostream>
#include <iomanip> 
using namespace std;


int  main()
{
	double x, shag = 0.2, x0 = 1, xn = 3;          // точка, в которой надо вычислить значение многочлена, шаг, начальная и конец
	int koef = 1, znak = -1, slog, n;		//koef-коэфициент при x, znak - знак меняется через раз, slog - это чтобы не напартачить с коэфициентом, n - степень многочлена      
	cout << "n= ";
	cin >> n;

	//const double  xn = xk + shag / 2; // высчитываем конец
	double   xpow = 1.0;		 //переменная для вычисления значения х в текущей степени, сначала х0=1  
	double result = 6;		 // результат вычесления в точке

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "  result   " << c4 << '\n'; // шапка


	int j = 0;
	for ( double x = x0; x <= xn; x += shag)
	{
		for (int i = 1; i <= n; i++)
		{
			xpow *= x * x;		// меняем степень x
			slog = koef * znak;			// берём коэфициент и меняем знак при нём
			result += slog * xpow;		 // слаживаем в результат
			znak *= -1;		// меняем знак для чередования
			koef++;		//увеличиваем коэфициент
		}

		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setprecision(2);
		cout << c4 << setw(11) << result << c4 << "\n"; // выводит результат

		result = 6;
		znak = -1;
	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';
	system("pause");
	return 0;
}

+++++++++++++++++++++++++++++++++++
рабочая прога


_____
#include <math.h>
#include <iostream>
#include <iomanip> 
using namespace std;


int  main()
{
	double x, shag = 0.2, x0 = 1, xn = 3;          // точка, в которой надо вычислить значение многочлена, шаг, начальная и конец
	int koef = 1, znak = -1, slog, n;		//koef-коэфициент при x, znak - знак меняется через раз, slog - это чтобы не напартачить с коэфициентом, n - степень многочлена      
	cout << "n= ";
	cin >> n;

	double  xpow = 1.0;		 //переменная для вычисления значения х в текущей степени, сначала х0=1  
	double result = 6;		 // результат вычесления в точке

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "  result   " << c4 << '\n'; // шапка
	   	
	for (double x = x0; x <= xn + shag/2; x += shag) //цикл для нахождения точки на прямой от x0 да xn + shag/2 (чтобы вошло 3)
	{
		result = 6; // результату присваиваем первоначальное значение
		xpow = 1.0; // востонавливаем xpow на первоначальное состояние 
		koef = 1; // востонавливаем koef на первоначальное состояние
		for (int i = 1; i <= n; i++) // цикл нахождения суммы в точке x
		{
			xpow *= x * x;		// меняем степень x
			
			slog = koef * znak;			// берём коэфициент и меняем знак при нём
			result += slog * xpow;		 // слаживаем в результат
			znak *= -1;		// меняем знак для чередования
			koef++;		//увеличиваем коэфициент
		}
		
		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setprecision(2);
		cout << c4 << setw(11) << result << c4 << "\n"; // выводит результат

		result = 6; // результату присваиваем первоначальное значение
		znak = -1; // ставим знак по дефолту
	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';
	system("pause");
	return 0;
}
______


Схема горнера:
=======================================
#include <iostream> 
using namespace std;

int main()
{
	double xn = 3, x0 = 1, shag = 0.2, result = 0;
	int n;
	cout << "input n: " << endl;
	cin >> n;
	cout << endl;
	for (double x=x0; x <= xn; x += shag)
	{
		result = 0;
		for (int i = n; i >= 1; i--)
		{
			if(i%2==0) result += i;
			else result -= i;
			result *= x*x; 
		}
		result += 6;
		cout << x << "		" << result << endl;
	
	}
	system("pause");
	return 0;
}
======================================
с таблицей
++++++++++++++++++


#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	double xn = 3, x0 = 1, shag = 0.2, result = 0;
	int n;
	cout << "input n: " << endl;
	cin >> n;
	cout << endl;

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "  result   " << c4 << '\n'; // шапка

		
	for (double x = x0; x <= xn; x += shag)
	{
		result = 0;
		for (int i = n; i >= 1; i--)
		{
			if (i % 2 == 0) result += i;
			else result -= i;
			result *= x * x;
		}

		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setprecision(2);
		cout << c4 << setw(11) << result << c4 << "\n"; // выводит результат

		result += 6;
	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';
	system("pause");
	return 0;
}
+++++++++++++++++++++++++++++++++++
========================================
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	double xn = 3, x0 = 1, shag = 0.2, result = 0;
	int n;
	cout << "input n: " << endl;
	cin >> n;
	cout << endl;

	char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	c0 = char(196);  c1 = char(218);  c2 = char(194);  c3 = char(191);
	c4 = char(179); c5 = char(195);  c6 = char(197);  c7 = char(180);
	c8 = char(192); c9 = char(217);  c10 = char(193);
	cout << c1 << c0 << c0 << c0 << c0 << c0 << c2 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c3 << '\n';
	cout << c4 << "  x  " << c4 << "  result   " << c4 << '\n'; // шапка


	for (double x = x0; x <= xn + shag / 2; x += shag)
	{
		result = 0; // обнуляем результат с новой итерацией
		for (int i = n; i >= 1; i--)
		{
			if (i % 2 == 0) result += i; // в зависимости четный или не чётный коэфициент мы его добовляем или отнимаем
			else result -= i;
			result *= x * x; // домножаем на x^2
		}

		cout << c5 << c0 << c0 << c0 << c0 << c0 << c6 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c7 << '\n';
		cout << setprecision(2);
		cout << c4 << setw(5) << x;
		cout << setprecision(2);

		result += 6;//добовляем в конце 6 - свободный коэфициент

		cout << c4 << setw(11) << result << c4 << "\n"; // выводит результат


	}
	cout << c8 << c0 << c0 << c0 << c0 << c0 << c10 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c0 << c9 << '\n';
	system("pause");
	return 0;
}
