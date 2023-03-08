#include <iostream>
#include <cmath>
#include "rational.h";

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int size;
	cout << "Введите кол-во дробей: ";
	cin >> size;
	cout << endl;

	rational* mas = new rational[size];

	int a, b;
	for (int i = 0; i < size; i++) {
		cout << "Введите числитель и знаменатель через пробел для дроби номер " << i + 1 << " : " << endl;
		cin >> a >> b;
		mas[i].set(a, b);
	}

	for (int i = 0; i < size; i++) {
		cout << "Дробь для " << i + 1 << " пары: ";
		mas[i].show();
		cout << endl;
	}

	cout << "Замените значения числителя и знаменателя для первой дроби:" << endl;
	cin >> a >> b;
	mas[0].set(a, b);
	cout << "Дробь для 1 пары: ";
	mas[0].show();
	cout << endl;

	(mas[0]).show(); cout << " + "; (mas[1]).show(); cout << " = ";
	((mas[0]) + (mas[1])).show();
	cout << endl;

	(mas[0]).show(); cout << " - "; (mas[1]).show(); cout << " = ";
	((mas[0]) - (mas[1])).show();
	cout << endl;

	(mas[0]).show(); cout << "++"; cout << " = ";
	rational xr = mas[0];
	(++xr).show();
	cout << endl;

	(mas[0]).show(); cout << " == "; (mas[1]).show();
	if (mas[0] == mas[1])
		cout << "Дроби равны";
	else
		cout << "Дроби не равны";
	cout << endl;

	(mas[0]).show(); cout << " > "; (mas[1]).show();
	if (mas[0] > mas[1])
		cout << "Первая дробь больше";
	else
		cout << "Вторая дробь больше";

	delete[] mas;

	return 0;
}
