//
// Created by User on 14.04.2019.
//

#ifndef LAB5_VECTOR_H
#define LAB5_VECTOR_H

#include <iostream>
#include <math.h>
using namespace std;
class Vector{
private:
    double x;
    double y;
public:
//структоры
    Vector();
    Vector(double x , double y);
    Vector(const Vector& object);
    ~Vector();
//функции
    void getAbs();
    void sumVector(Vector vector);
    void diffVector(Vector vector);
    void setValues(double x , double y);
    double get_X();
    double get_Y();
//операторы
    bool operator>(Vector vector);
    bool operator==(Vector vector);
    bool operator>=(Vector vector);
    bool operator<(Vector vector);
    bool operator!=(Vector vector);
    bool operator<=(Vector vector);
    Vector operator=(Vector right);
    friend ostream& operator<<(ostream& out , Vector &v);
    friend istream& operator>>(istream& in , Vector &v);


};
#endif //LAB5_VECTOR_H
