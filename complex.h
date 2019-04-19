//
// Created by User on 14.04.2019.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <math.h>
#include <iostream>
using namespace std;
class Complex{
private:
    double re;
    double im;
public:
//структоры

    Complex();
    Complex(double re , double im);
    Complex(const Complex& object);
    ~Complex();

//функции

    void setData(double re , double im);
    void getAbs();
    void printComplex();
    double getRe();
    double getIm();
    void setRe(double re);
    void setIm(double im);

//перегрузка операторов

    Complex operator++();
    Complex operator--();
	Complex operator++(int);
	Complex operator--(int);

    Complex operator=(Complex right);
    friend ostream& operator<<(ostream& out , const Complex &c);
    friend istream& operator>>(istream& in , Complex &c);
    bool operator>(Complex complex);
    bool operator==(Complex right);
    bool operator>=(Complex complex);
    bool operator<(Complex complex);
    bool operator!=(Complex complex);
    bool operator<=(Complex complex);

};
#endif //LAB5_COMPLEX_H
