#include <iostream>
using namespace std;
class Vehicle {
public:
Vehicle() { cout << "Vehicle default constructor\\n"; }
Vehicle(int x) { cout << "Vehicle parameterized constructor\\n"; }
~Vehicle() { cout << "Vehicle destructor\\n"; }
};
class Car : public Vehicle {
public:
Car() : Vehicle() { cout << "Car default constructor\\n"; }
Car(int x) : Vehicle(x) { cout << "Car parameterized constructor\\n"; }
~Car() { cout << "Car destructor\\n"; }
};
int main() {
cout << "Creating default car:\\n";
Car c1;
cout << "\\nCreating parameterized car:\\n";
Car c2(10);
cout << "\\nEnd of main; destructors run in reverse order.\\n";
return 0;
}