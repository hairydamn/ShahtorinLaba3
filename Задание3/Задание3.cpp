#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int x = 0;
	int sum = 0;
	do
	{
		sum = sum + x;
		x++;
	} while (x < 1001);
	cout << "Сумма чисел от 1 до 1000 равна: " << sum << endl;
	system("pause");
}
