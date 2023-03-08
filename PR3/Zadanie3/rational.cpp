#include "rational.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void rational::set(int a1, int b1)
{
	if ((a1 == 0) && (b1 != 0)) {
		a = a1; b = b1;
	}

	else if (b1 != 0) {
		a = a1; b = b1;
		if (a >= b) {
			if (a % b == 0) {
				a = a / b;
				b = 0;
			}
			else {
				a = a - int((a / b)) * b;
			}
		}

		else if ((b % a == 0) && (a != 1)) {
			b /= a;
			a = 1;
		}
	}

	else {
		a = 0;
		b = 0;
	}

}

void rational::show() {
	cout << to_string(a) + "/" + to_string(b);
}

void rational::get(int& a1, int& b1)
{
	a1 = a;
	b1 = b;
}

rational operator+(rational d1, rational d2)
{
	int a1, b1, a2, b2;

	d1.get(a1, b1);
	d2.get(a2, b2);

	int a, b;

	b = b1 * b2;

	a = a1 * b2 + a2 * b1;

	cout << a1 * b2 + a2 * b1 << endl;

	rational answer(a, b);

	return answer;
}

rational& rational::operator++()
{
	a = a + 1;
	set(a, b);

	return *this;
}

rational operator-(rational d1, rational d2)
{
	int a1, b1, a2, b2;

	d1.get(a1, b1);
	d2.get(a2, b2);

	int a, b;

	b = b1 * b2;

	a = a1 * b2 - a2 * b1;

	rational answer(a, b);

	return answer;
}


bool operator==(rational d1, rational d2)
{
	int a1, b1, a2, b2;
	d1.get(a1, b1);
	d2.get(a2, b2);

	return (a1 == a2 && b1 == b2);
}

bool operator>(rational d1, rational d2)
{
	int a1, b1, a2, b2;
	d1.get(a1, b1);
	d2.get(a2, b2);

	int a;

	a1 = a1 * b2;
	a2 = a2 * b1;

	return (a1 > a2);
}
