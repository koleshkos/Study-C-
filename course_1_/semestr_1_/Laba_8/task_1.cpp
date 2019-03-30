#include<iostream>
#include<string>

using namespace std;

class Bankomat
{
public:
	string id;
	int balance = 0;
	int min = 10;
	int max = 500;
	void identification()
	{
		cout << "Банкомат № " << id << endl;
	}
	void input()
	{
		cout << "Вставьте купюру! " <<endl;
	}
	void withdraw()
	{
		cout << "Возьмите деньги! " << endl;
	}

};

void main()
{
	setlocale(LC_ALL, "rus");

	system("pause");
}
