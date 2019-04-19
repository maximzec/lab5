//
// Created by User on 14.04.2019.
//

#include "complex.h"

Complex::Complex() {}

Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

Complex::Complex(const Complex &object):re(object.re) , im(object.im)  {}

Complex::~Complex() = default;

void Complex::printComplex() {
    if(this->im >= 0) std::cout<< this->re << "+" << this->im << "i"<< std::endl;
    else std::cout << this->re << "-" << this->im << "i"<< std::endl;
}

void Complex::getAbs() {
    std::cout << "The Abs = " << sqrt(this->re*this->re + this->im*this->im);
}

void Complex::setData(double re , double im){
    this->re = re;
    this->im = im;
}

double Complex::getIm() {
    return this->im;
}

double Complex::getRe() {
    return this->re;
}

void Complex::setIm(double im) {
    this->im = im;
}

void Complex::setRe(double re) {
    this->re = re;
}

Complex Complex::operator++() {
    this->re++;
    this->im++;
    return *this;

}

Complex Complex::operator++(int)
{
	Complex c = Complex(this->re, this->im);
	this->re++;
	this->im++;
	return c;
}

Complex Complex::operator--(int)
{
	Complex c = Complex(this->re, this->im);
	this->re--;
	this->im--;
	return c;
}

Complex Complex::operator--() {

	this->re--;
	this->im--;
    return *this;
}
bool Complex::operator==(Complex right) {
    return this->re == right.re && this->im == right.im;

}

bool Complex::operator<(Complex complex) {
    return this->re < complex.re && this->im < complex.im;
}

bool Complex::operator<=(Complex complex) {
    return this->re <= complex.re && this->im <= complex.im;
}

bool Complex::operator>=(Complex complex) {
    return this->re >= complex.re && this->im >= complex.im;
}

bool Complex::operator!=(Complex complex) {
    return this->re != complex.re && this->im != complex.im;
}



Complex  Complex::operator=(Complex right) {

        this->re = right.re;
        this->im = right.im;
        return *this;
}

ostream& operator<<(ostream &out, const Complex &c) {
    out << "The real part: " << c.re << " , The Complex part : " << c.im << std::endl;
    return out;
}

istream& operator>>(istream &in , Complex &c) {
    in >> c.re >> c.im;
    return in;
}

bool Complex::operator>(Complex complex) {
    return this->getRe() > complex.getRe() && this->getIm() > complex.getIm();
}