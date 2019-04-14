//
// Created by User on 14.04.2019.
//
#include "vector.h"
Vector::Vector() {}

Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector::Vector(const Vector &object): x(object.x) , y(object.y) {}

Vector::~Vector() = default;
void Vector::setValues(double x, double y) {
    this->x = x;
    this->y = y;
}

double Vector::get_X() {
    return this->x;
}

double Vector::get_Y() {
    return this->y;
}

void Vector::getAbs() {
    std::cout << "The Abs = " << sqrt(this->x*this->x + this->y*this->y);
}

void Vector::sumVector(Vector vector) {
    this->x += vector.get_X();
    this->y += vector.get_Y();
}

void Vector::diffVector(Vector vector) {
    this->x -= vector.get_X();
    this->y -= vector.get_Y();
}

bool Vector::operator!=(Vector vector) {
    return this->x != vector.x && this->y != vector.y;
}
bool Vector::operator>=(Vector vector) {
    return this->x >= vector.x && this->y >= vector.y;
}
bool Vector::operator<=(Vector vector) {
    return this->x <= vector.x && this->y <= vector.y;
}
bool Vector::operator<(Vector vector) {
    return this->x < vector.x && this->y < vector.y;
}
bool Vector::operator>(Vector vector) {
    return this->x > vector.x && this->y > vector.y;
}
bool Vector::operator==(Vector vector) {
    return this->x == vector.x && this->y == vector.y;
}
Vector Vector::operator=(Vector right) {
    this->x = right.x;
    this->y = right.y;
    return *this;
}
ostream& operator<<(ostream& out , Vector &v){
    out << "x - " << v.x << ", y - " << v.y;
    return out;
}
istream& operator>>(istream& in , Vector &v){
    in >> v.x >> v.y;
    return in;
}