#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
	double n;
	int third, fourth, c, d, sum;
	cin >> n;
	third = n;
	third = (third / 10) % 10;

	fourth = n;
	fourth = (fourth % 10);

	c = n * 100;
	c = c % 10;

	d = n * 100;
	d = (d % 100) / 10;
	sum = c + d;
	
	cout << ((sum | third) & (sum ^ fourth)) << endl;
	system("pause");
	return 0;
}
