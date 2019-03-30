#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	if ((x <= 0 && y <= 0 && y <= -0.5*x+1) || (x <=0 && y >= 0 && y <= 0.5*x + 1)) cout << "Yes" << endl;
	else cout << "No" << endl;

	cout << (((x <= 0 && y <= 0 && y <= -0.5*x+1) || (x <=0 && y >= 0 && y <= 0.5*x + 1)) ? "Yes" : "No") << endl;

	system("pause");
	return 0;
}
