#include <iostream>
using namespace std;
class Employee {
public:
void display() {
cout << "Employee display function\\n";
}
};
class Manager : public Employee {
public:
void display() {
cout << "Manager display function\\n";
}
};
int main() {
Manager m;
m.Employee::display(); // Call base-class version
m.display(); // Call derived-class version
return 0;
}