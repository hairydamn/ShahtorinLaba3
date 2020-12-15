#include <iostream>

using namespace std;

int main() {
	setlocale(0, "ru");
	int n;
	cout << "Количество элементов в последовательности? " << endl;
	cin >> n;
	cout << endl;
	long long f0 = 0, f1 = 1, f = 0;
	for (int c = 0; c < n; c++) {
		cout << "Число " << c + 1 << ": ";
		cout << f0 << endl;
		f = f + f0;
		f0 = f0 + f1;
		f1 = f0 - f1;
	}
	cout << endl;
	cout << "Сумма " << f << " из " << n << " чисел Фибоначчи! " << endl;
	return 0;
}
