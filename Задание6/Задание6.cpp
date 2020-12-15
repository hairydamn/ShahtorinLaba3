#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "ru");
	int x;
	cout << "Введите первое произвольное число:" << endl;
	cin >> x;

	int y;
	cout << "Введите второе произвольное число:" << endl;
	cin >> y;

	int NOD, ost; 

	do 
	{                                                                   
		ost = x % y; 
		x = y; 
		y = ost; 
	} 
	while (y < 0 || y > 0);                                      

	NOD = y; 
	cout << "Наибольший общий делитель: " << x << endl;

	system("pause");
}
