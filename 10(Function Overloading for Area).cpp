#include <iostream>
using namespace std;
const double PI = 3.14159;
double area(double radius) {
return PI * radius * radius; // Circle
}
double area(double length, double width) {
return length * width; // Rectangle
}
double area(int side) {
return side * side; // Square
}
int main() {
cout << "Circle area = " << area(3.0) << endl;
cout << "Rectangle area = " << area(4.0, 5.0) << endl;
cout << "Square area = " << area(4) << endl;
return 0;
}