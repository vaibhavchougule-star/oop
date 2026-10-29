#include <iostream>
using namespace std;
class Base {
public:
void show(int x) {
cout << "Base show(int): " << x << endl;
}
void show(double x) {
cout << "Base show(double): " << x << endl;
}
virtual void display() {
cout << "Base display()\\n";
}
};
class Derived : public Base {
public:
void display() override {
cout << "Derived display()\\n";
}
};
int main() {
Derived d;
Base* ptr = &d;
d.show(10); // Overload chosen at compile time: int version
d.show(2.5); // Overload chosen at compile time: double version
ptr->display(); // Override chosen at run time: Derived version
return 0;
}