
#include <iostream>
#include "Shape.hpp"
using namespace std;

void Shape::setPosition(int a, int b) {
    x = a;
    y = b;
}

void Shape::showPosition() const {
    cout << "좌표 (" << x << "," << y << ")에 ";
}
