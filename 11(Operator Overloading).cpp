#include <iostream>
using namespace std;
class Complex {
float real, imag;
public:
Complex(float r = 0, float i = 0) : real(r), imag(i) {}
Complex operator+(const Complex& c) const {
return Complex(real + c.real, imag + c.imag);
}
Complex operator*(const Complex& c) const {
return Complex(real * c.real - imag * c.imag,
real * c.imag + imag * c.real);
}
void display() const {
cout << real;
if (imag >= 0) cout << " + " << imag << "i";
else cout << " - " << -imag << "i";
cout << endl;
}
};
int main() {
Complex a(2, 3), b(4, 5);
Complex sum = a + b;
Complex product = a * b;
cout << "Addition: ";
sum.display();
cout << "Multiplication: ";
product.display();
return 0;
}