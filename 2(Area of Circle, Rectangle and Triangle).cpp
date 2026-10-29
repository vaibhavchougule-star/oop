#include <iostream>
using namespace std;
class Shape {
public:
virtual void area() {
cout << "Area of a shape";
}
};
class Circle : public Shape {
float radius;
public:
Circle(float r) : radius(r) {}
void area() override {
cout << "Circle area = " << 3.14159f * radius * radius << endl;
}
};
class Rectangle : public Shape {
float length, width;
public:
Rectangle(float l, float w) : length(l), width(w) {}
void area() override {
cout << "Rectangle area = " << length * width << endl;
}
};
class Triangle : public Shape {
float base, height;
public:
Triangle(float b, float h) : base(b), height(h) {}
void area() override {
cout << "Triangle area = " << 0.5f * base * height << endl;
}
};
int main() {
Circle c(5);
Rectangle r(4, 6);
Triangle t(3, 8);
c.area();
r.area();
t.area();
return 0;
}