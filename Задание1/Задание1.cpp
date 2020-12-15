#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ru");
	int s = 0;
	int h;
	cout << "Введите длину основания: " << endl;
	cin >> s;
	h = s / 2 + 1;
	for (int i = 0; i < h; i++)
	{

		int j = 0;
		int k;

		for (k = 0; k <= s; k++)
			if (k >= (h + i))
				cout << ' ';

		for (int j = 0; j <= s; j++)
			if (j > (h - i) && j < (h + i))
				cout << "\033[3;104;30m*\x1b[0m";

		cout << endl;
	}
	cout << endl;
	char r;
	cout << "Продолжить (y/n) ? ";
	cin >> r;
	if (r == 'y')
	{
		cout << endl;
		return main();
	}
	else if (r == 'n')
	{
		exit(0);
	}
	else
	{
		cout << endl;
		cout << "Ошибка!";
	}
	cout << endl;
	system("pause");
	return 0;
}
