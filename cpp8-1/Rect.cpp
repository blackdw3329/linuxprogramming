
#include <iostream>
#include "Shape.hpp"
using namespace std;

void Rect::setRect(int x, int y, int w, int h) {
    setPosition(x, y);
    width = w;
    height = h;
}

void Rect::show() const {
    showPosition();
    cout << "폭" << width << ", 높이"
         << height << "인 직사각형" << endl;
}
