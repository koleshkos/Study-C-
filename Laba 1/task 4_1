#include <iostream> 
using namespace std;

int main()
{
	int  k = 0;
	double eps = 0.000001, slag = 1, mnoj = 1, sum = 0, x;
	cout << "input x(0 < x <= 1): " << endl;
	cin >> x;
	mnoj = x * x / 2;
	if ((x <= 0) || (x > 1)) cout << "nepravelno vveden X"<< endl;
	else
	{
		while (slag > eps)
		{
			k++;
			mnoj *= x / (k + 2);
			slag = mnoj / (k + 1);
			if (k%2==0) sum += slag;
			else sum -= slag;
		}
		cout << sum << " " << k;
	}
	system("pause");
	return 0;
}


________________________________________________________________________________________

#include <iostream> 
using namespace std;

int main()
{
	int  k = 0;
	double eps = 0.000001, slag = 1, mnoj = 1, sum = 0, x;
	cout << "input x(0 < x <= 1): " << endl;
	cin >> x;
	mnoj = x * x / 2;
	if ((x <= 0) || (x > 1)) cout << "nepravelno vveden X" << endl;
	else
	{
		while (slag > eps)
		{
			k++;
			mnoj *= x / (k + 2);
			slag = mnoj / (k + 1);
			if (k % 2 == 0) sum += slag;
			else sum -= slag;
		}
		cout << "sum: " << sum <<endl;
		cout << "kolichestvo slogaemyh: " << k << endl;
	}
	system("pause");
	return 0;
}
