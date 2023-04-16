#pragma once
class type1 {
public:
    void Get_answer();
    void show();
};

class type2 {
private:
    double A;
public:
    type2(double a1);
    void Get_answer();
    void show();
};

class type3 {
private:
    double C;
public:
    type3(double c1);
    void Get_answer();
    void show();
};

class type4 {
private:
    double A, C;
public:
    type4(double a1, double c1);
    void Get_answer();
    void show();
};

class type5 {
private:
    double B, C;
public:
    type5(double b1, double c1);
    void Get_answer();
    void show();
};

class type6 {
private:
    double A, B, C;
public:
    type6(double a1, double b1, double c1);
    void Get_answer();
    void show();
};