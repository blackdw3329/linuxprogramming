
#include <iostream>
#include "Shape.hpp"
using namespace std;

int main() {
    Circle x;
    Rect y;
    Triangle z;

    Shape* shape;

    shape = &x;
    ((Circle*)shape)->setCircle(0, 0, 2);
    ((Circle*)shape)->show();

    shape = &y;
    ((Rect*)shape)->setRect(1, 1, 5, 10);
    ((Rect*)shape)->show();

    shape = &z;
    ((Triangle*)shape)->setTriangle(2, 2, 3, 4);
    ((Triangle*)shape)->show();

    return 0;
}
