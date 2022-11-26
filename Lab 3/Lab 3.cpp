#include <iostream>  
using namespace std;
void main()
{

	int a;
	setlocale(LC_ALL, "Ukr");
	cout << "Ведіть 1, 2 or 3: ";
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Ви ввели 1"; break;
	case 2:
		cout << "Ви ввели 2"; break;
	case 3:
		cout << "Ви ввели 3"; break;
	default:
		cout << "Ви не ввели 1, 2 або 3"; break;
	}
}
