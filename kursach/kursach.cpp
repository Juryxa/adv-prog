#include <iostream>
using namespace std;

class type1 {
public:
    void Get_answer() {
        cout << "Ответом является любое значение Х" << endl;
    }
    void show() {
        cout << "Уравнение 0 = 0" << endl;
    }
};

class type2 {
private:
    double A;
public:
    type2(double a1) {
        A = a1;
    }
    void Get_answer() {
        cout << "Ответом является Х = 0" << endl;
    }
    void show() {
        cout << "Уравнение " << A << "*x^2 = 0" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    type1 a;
    a.show();
    a.Get_answer(); 
    cout << '\n';
    type2(5).show();
    type2(5).Get_answer();
}