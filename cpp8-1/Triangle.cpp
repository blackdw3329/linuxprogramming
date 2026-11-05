
#include <iostream>
#include "Shape.hpp"
using namespace std;

void Triangle::setTriangle(int x, int y, int b, int h) {
    setPosition(x, y);
    base = b;
    height = h;
}

void Triangle::show() const {
    showPosition();
    cout << "밑변" << base << ", 높이"
         << height << "인 삼각형" << endl;
}
