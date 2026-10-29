#include <iostream>
using namespace std;
class Shape {
public:
virtual void calculateArea() {
cout << "Area not defined\\n";
}
virtual ~Shape() {}
};
class Circle : public Shape {
float r;
public:
Circle(float radius) : r(radius) {}
void calculateArea() override {
cout << "Circle area = " << 3.14159f * r * r << endl;
}
};
class Rectangle : public Shape {
float l, w;
public:
Rectangle(float length, float width) : l(length), w(width) {}
void calculateArea() override {
cout << "Rectangle area = " << l * w << endl;
}
};
class Triangle : public Shape {
float b, h;
public:
Triangle(float base, float height) : b(base), h(height) {}
void calculateArea() override {
cout << "Triangle area = " << 0.5f * b * h << endl;
}
};
int main() {
Circle c(3);
Rectangle r(4, 5);
Triangle t(6, 2);
Shape* ptr;
ptr = &c; ptr->calculateArea();
ptr = &r; ptr->calculateArea();
ptr = &t; ptr->calculateArea();
return 0;
}