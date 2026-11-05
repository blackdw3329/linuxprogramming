
#include <iostream>
#include "Shape.hpp"
using namespace std;

void Circle::setCircle(int x, int y, int r) {
    setPosition(x, y);
    radius = r;
}

void Circle::show() const {
    showPosition();
    cout << "반지름 " << radius << "인 원" << endl;
}
