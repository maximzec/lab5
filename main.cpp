#include <iostream>
#include "complex.h"
#include "vector.h"

int main() {
    Complex c1, c2;
    Vector v1, v2;
    std::cin >> c1;
    std::cin >> c2;

    if (c1 > c2)
    {
        std::cout << c1;
    }else
    {
        std::cout << c2;
    }

    std::cin >> v1;
    std::cin >> v2;
    if(v1 == v2)
    {
        std::cout << "Equals";
    }
    else{
        v1 = v2;
        std::cout <<"Now the`re equals";
        std::cout << v1;
        std::cout << v2;

    }

    return 0;
}