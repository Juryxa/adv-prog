﻿#include <iostream>
#include <cmath>
#include "types.h"
#include <windows.h>
#include <iomanip>
#include <string>
#include <vector>


using namespace std;


int main()
{
    setvbuf(stdout, nullptr, _IONBF, 0);

    setlocale(LC_ALL, "Russian");
    double A, B, C;
    system("color 17");

    inter myobj;
    myobj.Level1();
    return 0;
}