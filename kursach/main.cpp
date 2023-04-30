#include <iostream>
#include "types.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "1)" << endl;
    type1 a;
    a.show();
    a.Get_answer(); 
    cout << '\n';
    cout << "2)" << endl;
    type2(5).show();
    type2(5).Get_answer();
    cout << '\n';
    cout << "3)" << endl;
    type3(4).show();
    type3(4).Get_answer();
    cout << '\n';
    cout << "4)" << endl;
    type4(4, -2).show();
    type4(4, -2).Get_answer();
    cout << '\n';
    cout << "5)" << endl;
    type5(5, -3).show();
    type5(5, -3).Get_answer();
    cout << '\n';
    cout << "6)" << endl;
    type6(2, 6, -12).show();
    type6(2, 6, -12).Get_answer();
    cout << '\n';
    cout << "7)" << endl;
    type7(5).show();
    type7(5).Get_answer();
    cout << '\n';
    cout << "8)" << endl;
    type8(4,3).show();
    type8(4,3).Get_answer();
}