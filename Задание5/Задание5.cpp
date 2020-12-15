#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int x;
	cout << "Введите произвольное число: " << endl;
	cin >> x;
	if (x > 10000000000) 
	{
		cout << "Количество цифр в числе слишком много " << endl;
	}
	else 
	{
		int y = (x == 0) ? 1 : 0;
		while (x != 0)
		{
			y++;
			x /= 10;
		}
		cout << "Количество цифр в числе равно - " << y << endl;
		return y;
	}
	system("pause");
}