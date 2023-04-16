#include "types.h"
#include <iostream>
using namespace std;


void type1::Get_answer()
{
	cout << "������� �������� ����� �������� �" << endl;
}

void type1::show()
{
	cout << "��������� 0 = 0" << endl;
}

type2::type2(double a1)
{
	A = a1;
}

void type2::Get_answer()
{
	cout << "������� �������� � = 0" << endl;
}

void type2::show()
{
	cout << "��������� " << A << "*x^2 = 0" << endl;
}

type3::type3(double c1)
{
	C = c1;
}

void type3::Get_answer()
{
	cout << "������ ���" << endl;
}

void type3::show()
{
	cout << C << " = 0" << endl;
}

type4::type4(double a1, double c1)
{
	A = a1;
	C = c1;
}

void type4::Get_answer()
{
	double k = ((-1) * C) / A;
	if (k >= 0) {
		double x1 = sqrt(k);
		double x2 = sqrt(k) * (-1);
		cout << "����� ���������: " << endl << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
	}
	else {
		cout << "������ ���" << endl;
	}
}

void type4::show()
{
	cout << "��������� " << A << "*x^2 + " << C << " = 0" << endl;
}

type5::type5(double b1, double c1) {
    B = b1;
    C = c1;
}

void type5::Get_answer() {
    cout << "������ ���������: " << (-1) * (C / B) << endl;
}

void type5::show() {
    cout << "��������� " << B << "*x + " << C << " = 0" << endl;
}

type6::type6(double a1, double b1, double c1) {
    A = a1;
    B = b1;
    C = c1;
}

void type6::Get_answer() {
    double D = B * B - 4 * A * C;
    if (D < 0) {
        cout << "��������� �� ����� �������������� ������" << endl;
    }
    else {
        if (D == 0) {
            double x = ((-1) * B - sqrt(D)) / (2 * A);
            cout << "������ ���������: " << x << endl;
        }
        else {
            double x1 = ((-1) * B - sqrt(D)) / (2 * A);
            double x2 = ((-1) * B + sqrt(D)) / (2 * A);
            cout << "����� ���������: " << endl;
            cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;
        }
    }
}

void type6::show() {
    cout << "��������� " << A << "*x^2 + " << B << "*x + " << C << " = 0" << endl;
}