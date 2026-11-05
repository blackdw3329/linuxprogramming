
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
private:
    int x, y;

public:
    void setPosition(int a, int b);
    void showPosition() const;
};

class Circle : public Shape {
private:
    int radius;

public:
    void setCircle(int x, int y, int r);
    void show() const;
};

class Rect : public Shape {
private:
    int width, height;

public:
    void setRect(int x, int y, int w, int h);
    void show() const;
};

class Triangle : public Shape {
private:
    int base, height;

public:
    void setTriangle(int x, int y, int b, int h);
    void show() const;
};

#endif
