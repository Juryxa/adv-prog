#include <iostream>
#include "types.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    type1 a;
    a.show();
    a.Get_answer(); 
    cout << '\n';
    type2(5).show();
    type2(5).Get_answer();
    cout << '\n';
    type3(4).show();
    type3(4).Get_answer();
    cout << '\n';
    type4(4, -2).show();
    type4(4, -2).Get_answer();
    cout << '\n';
    type5(5, -3).show();
    type5(5, -3).Get_answer();
    cout << '\n';
    type6(2, 6, -12).show();
    type6(2, 6, -12).Get_answer();
}