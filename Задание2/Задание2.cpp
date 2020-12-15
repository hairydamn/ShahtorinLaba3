#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int n, x, sum;
	cout << "Введите количество натуральных чисел (N):" << endl;
	cout << "N = ";
	cin >> n;
	cout << "Введите N чисел:" << endl;
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Число " << i + 1 << ": ";
		cin >> x;
		sum += x;
	}
	cout << "Cумма N чисел: " << sum << endl;
	system("pause");
	return 0;
}